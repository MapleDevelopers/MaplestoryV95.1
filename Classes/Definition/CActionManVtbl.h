#pragma once

/*
00000000 CActionManVtbl  struc; (sizeof = 0x4, align = 0x4, copyof_4326)
00000000 __vecDelDtor    dd ? ; offset
00000004 CActionManVtbl  ends
*/
struct CActionManVtbl
{
	void* __vecDelDtor;
};
