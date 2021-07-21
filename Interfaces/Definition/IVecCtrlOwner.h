#pragma once
#include "IVecCtrlOwnerVtbl.h"

/*
00000000 IVecCtrlOwner   struc; (sizeof = 0x4, align = 0x4, copyof_1953)
00000000 vfptr           dd ? ; offset
00000004 IVecCtrlOwner   ends
*/
class IVecCtrlOwner
{
	IVecCtrlOwnerVtbl* vfptr
};