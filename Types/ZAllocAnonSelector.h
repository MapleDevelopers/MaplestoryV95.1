class ZAllocAnonSelector
{
public:
    static unsigned int GetBlockSize(int nIndex, int* nAllocBlocks)
    {
        unsigned int result = 0;
        switch (nIndex)
        {
        case 0:
            *nAllocBlocks = 64;
            result = 16;
            break;
        case 1:
            *nAllocBlocks = 32;
            result = 32;
            break;
        case 2:
            *nAllocBlocks = 16;
            result = 64;
            break;
        case 3:
            *nAllocBlocks = 8;
            result = 128;
            break;
        default:
            *nAllocBlocks = 0;
            result = 0;
            break;
        }
        return result;
    }
};
