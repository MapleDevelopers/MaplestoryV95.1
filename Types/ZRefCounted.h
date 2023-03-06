#pragma once
#include "ZrefCountedVtbl.h"

/*
00000000 ZRefCounted     struc; (sizeof = 0xC, align = 0x4, copyof_1415)
00000000 vfptr           dd ?
00000004 ___u1           $36278AFD065970C7D4092836021FCEE3 ?
00000008 _m_pPrev        dd ?
0000000C ZRefCounted     ends
*/
class ZRefCounted
{
public:
    // pointer to previous ZRefCounted object
    ZRefCounted * _m_pPrev; 
    // reference count
    int _m_nRef; 

    ZRefCounted()
    {
        _m_pPrev = nullptr;
        _m_nRef = 0;
        vfptr = &vftable;
    }

    virtual ~ZRefCounted()
    {
        vfptr = &vftable;
    }

    // vector deleting destructor
    void operator delete(void* p)
    {
        if (p)
            ZAllocEx<ZAllocAnonSelector>::Free(&ZAllocEx<ZAllocAnonSelector>::_s_alloc, p);
    }

    // vector deleting destructor with size parameter
    void operator delete(void* p, size_t size)
    {
        if (p)
            ZAllocEx<ZAllocAnonSelector>::Free(&ZAllocEx<ZAllocAnonSelector>::_s_alloc, p);
    }

private:
    ZRefCountedVtbl* vfptr;

    // virtual function table
    static ZRefCountedVtbl vftable;
};

ZRefCountedVtbl ZRefCounted::vftable =
{
    (void*)(&ZRefCounted::~ZRefCounted)
};