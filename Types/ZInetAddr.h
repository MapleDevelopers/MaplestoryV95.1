#pragma once
#include <Windows.h>

/*
00000000 ZInetAddr       struc ; (sizeof=0x10, align=0x4, copyof_1905)
00000000 baseclass_0     sockaddr_in ?
00000010 ZInetAddr       ends
*/
struct ZInetAddr : sockaddr_in 
{
};