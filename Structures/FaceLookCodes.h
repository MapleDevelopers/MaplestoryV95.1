#pragma once

/*
00000000 FACELOOKCODES   struc; (sizeof = 0xC, align = 0x4, copyof_3767)
00000000 nFace           dd ?
00000004 nEmotion        dd ?
00000008 nAcc            dd ?
0000000C FACELOOKCODES   ends
*/
struct FACELOOKCODES
{
	int nFace;
	int nEmotion;
	int nAcc;
};