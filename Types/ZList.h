#pragma once
#include "ZListVtbl.h"

/*
00000000 ZList<int>      struc ; (sizeof=0x14, align=0x4, copyof_3484)
00000000 vfptr           dd ?
00000004 gap4            db ?
00000005                 db ? ; undefined
00000006                 db ? ; undefined
00000007                 db ? ; undefined
00000008 _m_uCount       dd ?
0000000C _m_pHead        dd ?
00000010 _m_pTail        dd ?
00000014 ZList<int>      ends
*/
template <class T> 
class ZList
{
    ZListVtbl* vfptr;
    unsigned int Unknown1;
    unsigned int Unknown2;
    unsigned int _m_uCount;
    T* _m_pHead;
    T* _m_pTail;
};