class ZAllocBase
{
public:
    static DWORD* _AllocRawBlocks(unsigned int uBlockSize, unsigned int u)
    {
        unsigned int v2 = uBlockSize + 4;
        void* v3 = ZAPI::GetProcessHeap();
        unsigned int* v4 = (unsigned int*)ZAPI::HeapAlloc(v3, 0, u * (uBlockSize + 4) + 8);
        *v4++ = u * (uBlockSize + 4) + 4;
        *v4++ = 0;
        *v4 = uBlockSize;
        DWORD* result = (DWORD*)(v4 + 1);
        DWORD* v6 = result;
        if (u != 1)
        {
            unsigned int v7 = u - 1;
            do
            {
                --v7;
                *v6 = (char*)v6 + v2;
                v6 = (DWORD*)((char*)v6 + v2);
                *(v6 - 1) = uBlockSize;
            } while (v7);
        }
        *v6 = 0;
        return result;
    }
};