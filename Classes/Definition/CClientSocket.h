#pragma once
#include "ZXString.h"
#include "ZList.h"
#include "ZRef.h"
#include "ZFatalSection.h"
#include "CInPacket.h"
#include "COutPacket.h"
#include "ZSocketBase.h"
#include "ZInetAddr.h"
#include "ZSocketBuffer.h"

/*
00000000 CClientSocket   struc; (sizeof = 0x94, align = 0x4, copyof_1893)
00000000 vfptr           dd ? ; offset
00000004 m_hWnd          dd ? ; offset
00000008 m_sock          ZSocketBase ?
0000000C m_ctxConnect    CClientSocket::CONNECTCONTEXT ?
00000028 m_addr          ZInetAddr ?
00000038 m_tTimeout      dd ?
0000003C m_lpRecvBuff    ZList<ZRef<ZSocketBuffer> > ?
00000050 m_lpSendBuff    ZList<ZRef<ZSocketBuffer> > ?
00000064 m_packetRecv    CInPacket ?
0000007C m_lockSend      ZFatalSection ?
00000084 m_uSeqSnd       dd ?
00000088 m_uSeqRcv       dd ?
0000008C m_URLGuestIDRegistration ZXString<char> ?
00000090 m_bIsGuestID    dd ?
00000094 CClientSocket   ends
*/
class CClientSocket 
{
	~CClientSocket() = default;

public:
	/*
	00000000 CClientSocket::CONNECTCONTEXT struc ; (sizeof=0x1C, align=0x4, copyof_1906)
	00000000 lAddr           ZList<ZInetAddr> ?      ; 
	00000014 posList         dd ?                    ; offset
	00000018 bLogin          dd ?                    ; 
	0000001C CClientSocket::CONNECTCONTEXT ends
	*/
	struct CONNECTCONTEXT 
	{
		ZList<ZInetAddr>lAddr;
		int posList;
		int pBegin;
	};

	int m_hWnd;
	ZSocketBase m_sock;
	CONNECTCONTEXT m_ctxConnect;
	ZInetAddr m_addr;
	int m_tTimeout;
	ZList<ZRef<ZSocketBuffer>> m_lpRecvBuff;
	ZList<ZRef<ZSocketBuffer>> m_lpSendBuff;
	CInPacket m_packetRecv;
	ZFatalSection<void> m_lockSend;
	unsigned int m_uSeqSnd;
	unsigned int m_uSeqRcv;
	ZXString<char> m_URLGuestIDRegistration;
	bool m_bIsGuestID;

	void ProcessPacket(CInPacket* packet);
	void SendPacket(COutPacket* packet);
	void Flush();
};