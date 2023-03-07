#include "../Definition/CScriptMan.h"

void CScriptMan::OnScriptMessage(CInPacket* iPacket)
{
	if (this.m_bProcMessage) 
	{
		//throw CMSException(553648131);
	}

	this.m_bProcMessage = true;

	int nSpeakerTypeID = iPacket->Decode1();
	int nSpeakerTemplateID = iPacket->Decode4();
	int nMsgType = iPacket->Decode1();
	char bParam = iPacket->Decode1();

	switch (nMsgType)
	{
		case 0:
			CScriptMan::OnSay(nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
			break;
		case 1:
			CScriptMan::OnSayImage(nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
			break;
		case 2:
			// bNoNPC = false, bQuest = false
			CScriptMan::OnAskYesNo(nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam, false, false);
			break;
		case 3:
			CScriptMan::OnAskText(nSpeakerTypeID, nSpeakerTemplateID, iPacket, (ZXString<char>*)bParam);
			break;
		case 4:
			CScriptMan::OnAskNumber(nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
			break;
		case 5:
			CScriptMan::OnAskMenu(nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
			break;
		case 6:
			CScriptMan::OnAskQuiz(nSpeakerTypeID, nSpeakerTemplateID, iPacket);
			break;
		case 7:
			CScriptMan::OnAskSpeedQuiz(nSpeakerTypeID, nSpeakerTemplateID, iPacket);
			break;
		case 8:
			CScriptMan::OnAskAvatar(nSpeakerTypeID, nSpeakerTemplateID, iPacket);
			break;
		case 9:
			CScriptMan::OnAskMembershopAvatar(nSpeakerTypeID, nSpeakerTemplateID, iPacket);
			break;
		case 10:
			CScriptMan::OnAskPet(nSpeakerTypeID, nSpeakerTemplateID, iPacket);
			break;
		case 11:
			CScriptMan::OnAskPetAll(nSpeakerTypeID, nSpeakerTemplateID, iPacket);
			break;
		case 13:
			// bNoNPC = false, bQuest = true
			CScriptMan::OnAskYesNo(nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam, false, true);
			break;
		case 14:
			CScriptMan::OnAskBoxText(nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
			break;
		case 15:
			CScriptMan::OnAskSlideMenu(iPacket);
			break;
		default:
			break;
	}
	
	this.m_bProcMessage = false;
}

void CScriptMan::OnSay(int nSpeakerTypeID, int nSpeakerTemplateID, CInPacket* iPacket, char bParam)
{
	CInPacket* v6 = iPacket;
	
	// TODO: flags...
	if (bParam & 4) {
		nSpeakerTemplateID = CInPacket::Decode4(iPacket);
	}
	
	ZXString<char> strMessage;
	CInPacket::DecodeStr(v6, &strMessage);
	int bPrev = static_cast<int>(CInPacket::Decode1(v6));
	int bNext = static_cast<int>(CInPacket::Decode1(v6));
	
	// TODO:
}