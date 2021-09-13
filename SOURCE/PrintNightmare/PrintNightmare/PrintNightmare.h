#pragma once

#include <windows.h> 

typedef struct _UNICODE_STRING {
	USHORT Length;
	USHORT MaximumLength;
	PWSTR  Buffer;
} UNICODE_STRING, * PUNICODE_STRING;

typedef const UNICODE_STRING* PCUNICODE_STRING;

typedef struct _RTL_RELATIVE_NAME {
	UNICODE_STRING RelativeName;
	HANDLE ContainingDirectory;
	void* CurDirRef;
} RTL_RELATIVE_NAME, * PRTL_RELATIVE_NAME;

typedef struct __RPCDRIVER_INFO_2 {
	DWORD cVersion;
	DWORD NameOffset;
	DWORD EnvironmentOffset;
	DWORD DriverPathOffset;
	DWORD DataFileOffset;
	DWORD ConfigFileOffset;
} _RPCDRIVER_INFO_2, *PRPC_DRIVER_INFO_2;

typedef BOOLEAN(NTAPI* _RtlDosPathNameToRelativeNtPathName_U)(
	_In_ PCWSTR DosFileName,
	_Out_ PUNICODE_STRING NtFileName,
	_Out_opt_ PWSTR* FilePath,
	_Out_opt_ PRTL_RELATIVE_NAME RelativeName
	);
