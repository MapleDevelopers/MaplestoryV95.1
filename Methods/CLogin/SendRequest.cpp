#include "../Structures/CLogin.h"

void __thiscall CLogin::SendRequest(CLogin* this, COutPacket* oPacket)
{
	CLogin* login_struct; // esi

	login_struct = this;
	CClientSocket::SendPacket(TSingleton<CClientSocket>::ms_pInstance, oPacket);
	login_struct->m_bRequestSent = 1;
}