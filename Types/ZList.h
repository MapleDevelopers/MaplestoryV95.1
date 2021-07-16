#pragma once

template <class T> class ZList
{
    //ZListVtbl* vfptr;

    public:
        unsigned int Unknown1;
        unsigned int Unknown2;

        unsigned int _m_uCount;
        T* _m_pHead;
        T* _m_pTail;
};