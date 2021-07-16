#pragma once

/*
00000000 TSecData<int>   struc; (sizeof = 0xC, align = 0x4, copyof_1960)
00000000 data            dd ?
00000004 bKey            db ?
00000005 FakePtr1        db ?
00000006 FakePtr2        db ?
00000007                 db ? ; undefined
00000008 wChecksum       dw ?
0000000A                 db ? ; undefined
0000000B                 db ? ; undefined
0000000C TSecData<int>   ends
*/
template <typename T> 
class TSecData
{
	T data;
	unsigned char bKey;
	unsigned char FakePtr1;
	unsigned char FakePtr2;
	unsigned short wChecksum;
};