#pragma once

LPCWSTR
FindFileName(LPCWSTR pPath);
WCHAR *
MultiByteToWide(CHAR *lpMultiByteStr);
DWORD
GetNtPathFromHandle(HANDLE Handle, PUNICODE_STRING *ObjectName);
PVOID
SfwUtilReadFile(CONST WCHAR *wszFileName, DWORD *lpNumberOfBytesRead);