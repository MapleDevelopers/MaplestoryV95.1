#pragma once
#include "TSecType.h"

/*
00000000 SECPOINT        struc; (sizeof = 0x18, align = 0x4, copyof_1435)
00000000 y               TSecType<long> ?
0000000C x               TSecType<long> ?
00000018 SECPOINT        ends
*/
struct SECPOINT
{
	TSecType<long> y;
	TSecType<long> x;
};