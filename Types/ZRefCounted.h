#pragma once
#include "../Types/ZrefCountedVtbl.h"

/*
00000000 ZRefCounted     struc; (sizeof = 0xC, align = 0x4, copyof_1415)
00000000 vfptr           dd ?
00000004 ___u1           $36278AFD065970C7D4092836021FCEE3 ?
00000008 _m_pPrev        dd ?
0000000C ZRefCounted     ends
*/
struct ZRefCounted
{
	ZRefCountedVtbl* vfptr;

	union
	{
		long _m_nRef;
		ZRefCounted* _m_pNext;
	};

	ZRefCounted* _m_pPrev;
};