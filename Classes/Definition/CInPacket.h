#pragma once
#include "ZArray.h"

/*
00000000 CInPacket       struc; (sizeof = 0x18, align = 0x4, copyof_1568)
00000000 m_bLoopback     dd ?
00000004 m_nState        dd ?
00000008 m_aRecvBuff     ZArray<unsigned char> ? ;
0000000C m_uLength       dw ?
0000000E m_uRawSeq       dw ?
00000010 m_uDataLen      dw ?
00000012                 db ? ; undefined
00000013                 db ? ; undefined
00000014 m_uOffset       dd ?
00000018 CInPacket       ends
*/
class CInPacket
{
	bool m_bLoopback;
	int m_nState;
	ZArray<unsigned char> m_aRecvBuff;
	unsigned int m_uLength;
	unsigned int m_uRawSeq;
	unsigned int m_uDataLen;
	unsigned char Unknown1;
	unsigned char Unknown2;
	unsigned int m_uOffset;
};