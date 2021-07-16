#pragma once
#include "TSecData.h"

/*
00000000 TSecType<int>   struc ; (sizeof=0xC, align=0x4, copyof_1961)
00000000 FakePtr1        dd ?
00000004 FakePtr2        dd ?
00000008 m_secdata       dd ? ; offset
0000000C TSecType<int>   ends
*/
template <typename T>
class TSecType
{
	unsigned long FakePtr1;
	unsigned long FakePtr2;
	TSecData<T>* m_secdata;
}