#pragma once
#include "CLife.h"
#include "MobStat.h"
#include "Range.h"
#include "_ZtlSecureTear_.h"

/*
00000000 CMob            struc; (sizeof = 0x5E8, align = 0x8, copyof_2235)
00000000 baseclass_0     CLife ?
00000088 m_nMobChargeCount dd ?
0000008C m_bAttackReady  dd ?
00000090 m_nAngerGaugeCount dd ?
00000094 m_nUpdateTime   dd ?
00000098 m_nCurrIndicatorIndex dd ?
0000009C m_bFullChargeEffectTime dd ?
000000A0 m_bFullChargeEffectStartTime dd ?
000000A4 m_effectAttack  CMob::ATTACKEFFECT ?
000000B0 m_lAffectedSkillEntry ZList<CMob::AFFECTEDSKILLENTRY> ?
000000C4 m_lAttackEntry  ZList<CMob::ATTACKENTRY> ?
000000D8 m_lpLayerASAni  ZList<_com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > > ?
000000EC m_lpLayerASIcon ZList<_com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > > ?
00000100 m_posAffectedGuidedBullet dd ? ; offset
00000104 m_pvc           _com_ptr_t<_com_IIID<IWzVector2D, &_GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4> > ?
00000108 m_pvcActive     _com_ptr_t<_com_IIID<IWzVector2D, &_GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4> > ?
0000010C m_pvcHead       _com_ptr_t<_com_IIID<IWzVector2D, &_GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4> > ?
00000110 _ZtlSecureTear_m_bInViewSplit dd 2 dup(? )
00000118 _ZtlSecureTear_m_bInViewSplit_CS dd ?
0000011C _ZtlSecureTear_m_nMobCtrlState dd 2 dup(? )
00000124 _ZtlSecureTear_m_nMobCtrlState_CS dd ?
00000128 _ZtlSecureTear_m_nMobCtrlSN dw 2 dup(? )
0000012C _ZtlSecureTear_m_nMobCtrlSN_CS dd ?
00000130 m_nSkillCommand dd ?
00000134 m_nSLV          dd ?
00000138 m_nSummonType   dd ?
0000013C m_tSummonEffect dd ?
00000140 m_tDoomEffectEnd dd ?
00000144 _ZtlSecureTear_m_tLastApplyCtrl dd 2 dup(? )
0000014C _ZtlSecureTear_m_tLastApplyCtrl_CS dd ?
00000150 _ZtlSecureTear_m_tLastTryPickUpDrop dd 2 dup(? )
00000158 _ZtlSecureTear_m_tLastTryPickUpDrop_CS dd ?
0000015C m_tLastAreaAttack dd ?
00000160 m_bDoFirstAttack dd ?
00000164 m_uLayerStateCounter dd ?
00000168 _ZtlSecureTear_m_dwMobID dd 2 dup(? )
00000170 _ZtlSecureTear_m_dwMobID_CS dd ?
00000174 m_pTemplate     dd ? ; offset
00000178 m_pTemplateByDoom dd ? ; offset
0000017C _ZtlSecureTear_m_nMP dd 2 dup(? )
00000184 _ZtlSecureTear_m_nMP_CS dd ?
00000188 m_stat          MobStat ?
000003C0 m_rgHorz        RANGE ?
000003C8 m_nTeamForMCarnival dd ?
000003CC m_nPhase        dd ?
000003D0 _ZtlSecureTear_m_nMoveAction dd 2 dup(? )
000003D8 _ZtlSecureTear_m_nMoveAction_CS dd ?
000003DC _ZtlSecureTear_m_nOneTimeAction dd 2 dup(? )
000003E4 _ZtlSecureTear_m_nOneTimeAction_CS dd ?
000003E8 _ZtlSecureTear_m_tHitExpire dd 2 dup(? )
000003F0 _ZtlSecureTear_m_tHitExpire_CS dd ?
000003F4 _ZtlSecureTear_m_tLastHitExpire dd 2 dup(? )
000003FC _ZtlSecureTear_m_tLastHitExpire_CS dd ?
00000400 m_posFrame      dd ? ; offset
00000404 _ZtlSecureTear_m_tCurFrameRemain dd 2 dup(? )
0000040C _ZtlSecureTear_m_tCurFrameRemain_CS dd ?
00000410 _ZtlSecureTear_m_tNextFramesRemain dd 2 dup(? )
00000418 _ZtlSecureTear_m_tNextFramesRemain_CS dd ?
0000041C _ZtlSecureTear_m_tActionDelay dd 2 dup(? )
00000424 _ZtlSecureTear_m_tActionDelay_CS dd ?
00000428 m_rcBody        tagRECT ?
00000438 m_rcBodyFlip    tagRECT ?
00000448 m_arcMultiBody  ZArray<tagRECT> ?
0000044C m_arcMultiBodyFlip ZArray<tagRECT> ?
00000450 m_arcAttackBody ZArray<tagRECT> ?
00000454 m_arcAttackBodyFlip ZArray<tagRECT> ?
00000458 m_aAction       ZArray<ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY> > > ?
0000045C _ZtlSecureTear_m_tInitDelay dd 2 dup(? )
00000464 _ZtlSecureTear_m_tInitDelay_CS dd ?
00000468 _ZtlSecureTear_m_nDeadType dd 2 dup(? )
00000470 _ZtlSecureTear_m_nDeadType_CS dd ?
00000474 _ZtlSecureTear_m_nSuspended dd 2 dup(? )
0000047C _ZtlSecureTear_m_nSuspended_CS dd ?
00000480 m_tLastPoisonDamage dd ?
00000484 m_tLastVenomDamage dd ?
00000488 m_tLastAmbushDamage dd ?
0000048C m_tLastObstacleDamage dd ?
00000490 m_tLastHitByMob dd ?
00000494 m_tLastHitDazzledMob dd ?
00000498 m_ldwRevive     ZList<unsigned long> ?
000004AC m_lDamageInfo   ZList<CMob::DAMAGEINFO> ?
000004C0 m_lHitEffect    ZList<CMob::HITEFFECT> ?
000004D4 m_lDropPickUpLog ZList<CMob::DROPPICKUP> ?
000004E8 m_pLayerAction  _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000004EC m_nCalcDamageStatIndex dd ?
000004F0 m_pLayerHPTag   _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000004F4 m_pEffectLayer  _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000004F8 m_pLayerAngerTag _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000004FC m_bNeedToUpdateCrc dd ?
00000500 m_dwMobCrc      dd ?
00000504 m_tLastHitted   dd ?
00000508 m_pCanvasHPIndicator _com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
0000050C m_mDelayedHPIndicator ZMap<long, long, long> ?
00000524 m_pCanvasAngerIndicatorArrayCount ZArray<long> ?
00000528 m_pCanvasAngerIndicatorArray ZArray<ZArray<_com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > > > ?
0000052C m_nGaugeCount   dd ?
00000530 m_pAttrShoe     ZRef<CAttrShoe> ?
00000538 m_ptPos         SECPOINT ?
00000550 m_ptPosPrev     SECPOINT ?
00000568 m_nHPpercentage dd ?
0000056C m_bWaitingToBeSetTossed dd ?
00000570 m_aMultiTargetForBall ZArray<tagPOINT> ?
00000574 m_aRandTimeforAreaAttack ZArray<long> ?
00000578 m_delaySkill    CMob::DelaySkill ?
00000588 m_bDoomReserved dd ?
0000058C m_bDoomReservedSN db ?
0000058D                 db ? ; undefined
0000058E                 db ? ; undefined
0000058F                 db ? ; undefined
00000590 m_lpStatChangeReserved ZList<ZRef<CMob::ReservedPacket> > ?
000005A4 m_bChasing      TSecType<int> ?
000005B0 m_tTimeBomb     dd ?
000005B4 m_dwSwallowCharacterID dd ?
000005B8 m_dwTargetMobID dd ?
000005BC m_tEscortStopActTime dd ?
000005C0 m_nEscortStopAct dd ?
000005C4 m_nDamagedByMobHPBarState dd ?
000005C8 m_nRushAttackIdx dd ?
000005CC m_tRushAttackEnd dd ?
000005D0 m_Bullets       CMob::MobBullet::Container ?
000005E8 CMob            ends
*/
class CMob : CLife
{
	/*
	00000000 CMob::ATTACKEFFECT struc; (sizeof = 0xC, align = 0x4, copyof_2176)
	00000000; XREF: CMob / r
	00000000 tStart          dd ?
	00000004 bLeft           dd ?
	00000008 sEffect         Ztl_bstr_t ?
	0000000C CMob::ATTACKEFFECT ends
	*/
	struct ATTACKEFFECT
	{
		int tStart;
		bool bLeft;
		Ztl_bstr_t sEffect;
	};

	/*
	00000000 CMob::AFFECTEDSKILLENTRY struc ; (sizeof=0x18, align=0x4, copyof_2181)
	00000000 nSkillID        dd ?
	00000004 tStart          dd ?
	00000008 posList         dd ?                    ; offset
	0000000C bIcon           dd ?
	00000010 bFlip           dd ?
	00000014 pLayer          _com_ptr_t<_com_IIID<IWzGr2DLayer,&_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
	00000018 CMob::AFFECTEDSKILLENTRY ends
	*/
	struct AFFECTEDSKILLENTRY
	{
		int nSkillID;
		int tStart;
		void* posList;
		bool bIcon;
		bool bFlip;
		//pLayer
	};

	/*
	00000000 CMob::ATTACKENTRY struc ; (sizeof=0x20, align=0x4, copyof_2187)
	00000000 tTime           dd ?
	00000004 nType           dd ?
	00000008 ___u2           $8D0FFB5756D375F4E287AC335782F0D3 ?
	00000018 bLeft           dd ?
	0000001C nAttackIdx      dd ?
	00000020 CMob::ATTACKENTRY ends
	*/
	struct ATTACKENTRY
	{
		int tTime;
		int nType;

		union ___u2
		{
		};

		bool bLeft;
		int nAttackIdx;
	};

	int m_nMobChargeCount;
	bool m_bAttackReady;
	int m_nAngerGaugeCount;
	int m_nUpdateTime;
	int m_nCurrIndicatorIndex;
	bool m_bFullChargeEffectTime;
	bool m_bFullChargeEffectStartTime;
	CMob::ATTACKEFFECT m_effectAttack;
	ZList<CMob::AFFECTEDSKILLENTRY> m_lAffectedSkillEntry;
	ZList<CMob::ATTACKENTRY> m_lAttackEntry;
	//m_lpLayerASAni
	//m_lpLayerASIcon
	void* m_posAffectedGuidedBullet;
	//m_pvc
	//m_pvcActive
	//m_pvcHead
	_ZtlSecureTear_ m_bInViewSplit[2];
	_ZtlSecureTear_ m_bInViewSplit_CS;
	_ZtlSecureTear_ m_nMobCtrlState[2];
	_ZtlSecureTear_ m_nMobCtrlState_CS;
	_ZtlSecureTear_ m_nMobCtrlSN[2];
	_ZtlSecureTear_ m_nMobCtrlSN_CS;
	int m_nSkillCommand;
	int m_nSLV;
	int m_nSummonType;
	int m_tSummonEffect;
	int m_tDoomEffectEnd;
	_ZtlSecureTear_ m_tLastApplyCtrl[2];
	_ZtlSecureTear_ m_tLastApplyCtrl_CS;
	_ZtlSecureTear_ m_tLastTryPickUpDrop[2];
	_ZtlSecureTear_ m_tLastTryPickUpDrop_CS;
	int m_tLastAreaAttack;
	bool m_bDoFirstAttack;
	unsigned int m_uLayerStateCounter;
	_ZtlSecureTear_ m_dwMobID[2];
	_ZtlSecureTear_ m_dwMobID_CS;
	void* m_pTemplate;
	void* m_pTemplateByDoom;
	_ZtlSecureTear_ m_nMP[2];
	_ZtlSecureTear_ m_nMP_CS;
	MobStat m_stat;
	RANGE m_rgHorz;
	int m_nTeamForMCarnival;
	int m_nPhase;
};