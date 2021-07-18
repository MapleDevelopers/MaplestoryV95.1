#pragma once
#include "ZRef.h"
#include "..\Interfaces\Definition\IDraggable.h"

/*
00000000 DRAGCTX         struc; (sizeof = 0xC, align = 0x4, copyof_1451)
00000000 pContainer      dd ? ; offset
00000004 pObj            ZRef<IDraggable> ?
0000000C DRAGCTX         ends
*/
struct DRAGCTX
{
	unsigned int* pContainer;
	ZRef<IDraggable> pObj;
};