#pragma once

/*
00000000 UINT128         struc ; (sizeof=0x10, align=0x4, copyof_1578)
00000000 m_data          dd 4 dup(?)
00000010 UINT128         ends
*/
struct UINT128
{
	unsigned int m_data[4];
};