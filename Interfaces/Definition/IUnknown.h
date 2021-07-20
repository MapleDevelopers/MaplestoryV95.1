#pragma once
#include "IUnknownVtbl.h"

/*
00000000 IUnknown        struc; (sizeof = 0x4, align = 0x4, copyof_1391)
00000000 vfptr           dd ?
00000004 IUnknown        ends
*/
class IUnknown
{
	IUnknownVtbl* vfptr;
};