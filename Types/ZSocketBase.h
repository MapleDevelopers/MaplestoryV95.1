#pragma once

/*
00000000 ZSocketBase     struc; (sizeof = 0x4, align = 0x4, copyof_1895)
00000000 _m_hSocket      dd ?
00000004 ZSocketBase     ends
*/
struct ZSocketBase
{
	unsigned int _m_hSocket;
};