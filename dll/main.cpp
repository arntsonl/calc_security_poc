#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#pragma comment( linker, "/export:DllCanUnloadNow=_DllCanUnloadNow@0" )
#pragma comment( linker, "/export:DllGetClassObject=_DllGetClassObject@12" )
#pragma comment( linker, "/export:DllRegisterServer=_DllRegisterServer@0" )
#pragma comment( linker, "/export:DllUnregisterServer=_DllUnregisterServer@0" )

STDAPI DllCanUnloadNow(void)
{
	return TRUE;
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID FAR* ppv)
{
	return TRUE;
}

STDAPI DllRegisterServer(void)
{
	system("c:\\windows\\system32\\cmd.exe /C \"cmd.exe\"");
	return TRUE;
}

STDAPI DllUnregisterServer(void)
{
	return TRUE;
}

BOOL APIENTRY DllMain(HANDLE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved)
{
	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
	default:
		break;
	}
	return TRUE;
}