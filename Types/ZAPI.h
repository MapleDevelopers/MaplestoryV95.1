#pragma once

class ZAPI
{
public:
    static HANDLE GetProcessHeap()
    {
        return ZAPI::GetProcessHeap(); 
    }

    static LPVOID HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes) 
    {
        return ZAPI::HeapAlloc(hHeap, dwFlags, dwBytes);
    }
};