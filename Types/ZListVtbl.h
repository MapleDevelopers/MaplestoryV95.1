#pragma once

/*
00000000 ZList<int>Vtbl  struc ; (sizeof=0x4, align=0x4, copyof_3485)
00000000 __vecDelDtor    dd ?                    ; offset
00000004 ZList<int>Vtbl  ends
*/
struct ZListVtbl
{
	void* __vecDelDtor;
};