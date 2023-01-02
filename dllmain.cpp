// dllmain.cpp : 定義 DLL 應用程式的進入點。
#include "pch.h"

extern "C" {
    __declspec(dllexport) int __cdecl Add(int a, int b);
}

extern int __cdecl Add(int num1, int num2) {
    return num1 + num2;
    
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

