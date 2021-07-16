#pragma once
#include "../Structures/CMapLoadable.h"
#include "../Classes/Definition/ZRef.h"

/*
00000000 CLogin          struc ; (sizeof=0x2C8, align=0x4, copyof_4913)
00000000 baseclass_0     CMapLoadable ?
00000148 m_pConnectionDlg ZRef<CConnectionNoticeDlg> ?
00000150 m_bIsWaitingVAC dd ?
00000154 m_bIsVACDlgOn   dd ?
00000158 m_tSentTimeVACPacket dd ?
0000015C m_nCountRelatedSvrs dd ?
00000160 m_nCountCharacters dd ?
00000164 m_nCountDataReceivedCharacters dd ?
00000168 m_bRecommandWorld dd ?
0000016C m_aAvatarDataVAC ZArray<AvatarData> ?
00000170 m_aRankVAC      ZArray<CLogin::RANK> ?
00000174 m_adwCharacterID ZArray<unsigned long> ?
00000178 m_asCharacterName ZArray<ZXString<char> > ?
0000017C m_anWorldID     ZArray<long> ?
00000180 m_lock_Avatar   ZFatalSection ?
00000188 m_lock_CountSvr ZFatalSection ?
00000190 m_lock_Character ZFatalSection ?
00000198 m_pLayerBook    _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
0000019C m_nFadeOutLoginStep dd ?
000001A0 m_tStartFadeOut dd ?
000001A4 m_nLoginStep    dd ?
000001A8 m_tStepChanging dd ?
000001AC m_bRequestSent  dd ?
000001B0 m_bLoginOpt     db ?
000001B1                 db ? ; undefined
000001B2                 db ? ; undefined
000001B3                 db ? ; undefined
000001B4 m_bQuerySSNOnCreateNewCharacter dd ?
000001B8 m_nSlotCount    dd ?
000001BC m_nBuyCharCount dd ?
000001C0 m_nBaseStep     dd ?
000001C4 m_bTerminate    dd ?
000001C8 m_pFocusedUI    dd ? ; offset
000001CC m_WorldItem     ZArray<CLogin::WORLDITEM> ?
000001D0 m_nCharSelected dd ?
000001D4 m_aAvatarData   ZArray<AvatarData> ?
000001D8 m_aRank         ZArray<CLogin::RANK> ?
000001DC m_abOnFamily    ZArray<int> ?
000001E0 m_lNewEquip     ZList<CLogin::NEWEQUIP> ?
000001F4 m_nRegStatID    db ?
000001F5                 db ? ; undefined
000001F6                 db ? ; undefined
000001F7                 db ? ; undefined
000001F8 m_pLayerLight   _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000001FC m_pLayerDust    _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000200 m_pNewAvatar    ZRef<CAvatar> ?
00000208 m_pLoginStart   ZRef<CUILoginStart> ?
00000210 m_pLoginDesc0   ZRef<CFadeWnd> ?
00000218 m_pLoginDesc1   ZRef<CFadeWnd> ?
00000220 m_pChildModal   ZRef<CDialog> ?
00000228 m_sEventCharacterID ZXString<char> ?
0000022C m_nBalloonCount dd ?
00000230 m_aBalloon      ZArray<CLogin::BALLOON> ?
00000234 m_nLatestConnectedWorldID dd ?
00000238 m_bRecommendWorldMsgLoaded dd ?
0000023C m_aRecommendWorldMsg ZArray<RECOMMENDWORLDMSG> ?
00000240 m_nCurSelectedRace dd ?
00000244 m_nCurSelectedSubJob dw ?
00000246                 db ? ; undefined
00000247                 db ? ; undefined
00000248 m_aCmd          ZXString < char> 5 dup(? )
0000025C m_tFadeInRemain dd ?
00000260 m_bNeedAgreement dd ?
00000264 m_nGender       db ?
00000265                 db ? ; undefined
00000266                 db ? ; undefined
00000267                 db ? ; undefined
00000268 m_nSubStep      dd ?
0000026C m_bSubStepChanged dd ?
00000270 m_sCheckedName  ZXString<char> ?
00000274 m_aMaleItem     ZArray < CLogin::ASITEM> 9 dup(? )
00000298 m_aFemaleItem   ZArray < CLogin::ASITEM> 9 dup(? )
000002BC m_bCharSale     dd ?
000002C0 m_nCharSaleJob  dd ?
000002C4 m_bCanHaveExtraChar dd ?
000002C8 CLogin          ends
*/

struct CLogin { 
	CMapLoadable baseclass_0;
	ZRef<CConnectionNoticeDlg> m_pConnectionDlg;
	bool m_bIsWaitingVAC;
	bool m_bIsVACDlgOn;
	int m_tSentTimeVACPacket
};