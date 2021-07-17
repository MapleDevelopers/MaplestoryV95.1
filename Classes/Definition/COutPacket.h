#pragma once
#include "ZArray.h"

/*
00000000 COutPacket      struc; (sizeof = 0x10, align = 0x4, copyof_1567)
00000000 m_bLoopback     dd ?
00000004 m_aSendBuff     ZArray<unsigned char> ?
00000008 m_uOffset       dd ?
0000000C m_bIsEncryptedByShanda dd ?
00000010 COutPacket      ends
*/
class COutPacket
{
	bool m_bLoopback;
	ZArray<unsigned char> m_aSendBuff;
	unsigned int m_uOffset;
	bool m_bIsEncryptedByShanda;
};