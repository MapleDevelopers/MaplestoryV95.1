#include "../Definition/CLogin.h"

void CLogin::SendRequest(CLogin* this, COutPacket* oPacket)
{
	CClientSocket::SendPacket(TSingleton<CClientSocket>::ms_pInstance, oPacket);
	this->m_bRequestSent = 1;
}