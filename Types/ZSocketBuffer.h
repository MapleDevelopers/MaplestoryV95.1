#pragma once
#include "ZRefCounted.h"
#include "ZRef.h"
#include "Winsock2.h"

/*
00000000 ZSocketBuffer   struc; (sizeof = 0x1C, align = 0x4, copyof_1705)
00000000 baseclass_0     ZRefCounted ?
0000000C baseclass_c     _WSABUF ?
00000014 _m_pParent      ZRef<ZSocketBuffer> ?
0000001C ZSocketBuffer   ends
*/
struct ZSocketBuffer : ZRefCounted, _WSABUF
{
	ZRef<ZSocketBuffer> _m_pParent;

	~ZSocketBuffer() = delete;
};