#pragma once

/*
00000000 RANGE           struc; (sizeof = 0x8, align = 0x4, copyof_2028)
00000000 low             dd ?
00000004 high            dd ? 
00000008 RANGE           ends
*/
struct RANGE
{
	long low;
	long high;
};