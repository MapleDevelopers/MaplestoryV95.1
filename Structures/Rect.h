#pragma once

/*
00000000 tagRECT         struc; (sizeof = 0x10, align = 0x4, copyof_1377)
00000000 left            dd ? 
00000004 top             dd ? 
00000008 right           dd ?
0000000C bottom          dd ? 
00000010 tagRECT         ends 
*/
struct RECT
{
	int left;
	int top;
	int right;
	int bottom;
};