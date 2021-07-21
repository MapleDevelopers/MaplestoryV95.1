#pragma once
#include "CMob.h"
#include "CMobPoolVtbl.h"
#include "__Position.h"
#include "ZMap.h"
#include "ZList.h"
#include "ZRef.h"

/*
00000000 CMobPool        struc; (sizeof = 0x70, align = 0x4, copyof_2333)
00000000 vfptr           dd ? ; offset
00000004 m_mMob          ZMap<unsigned long, __POSITION*, unsigned long> ?
0000001C m_lMob          ZList<ZRef<CMob> > ?
00000030 m_lMobDelayedDead ZList<ZRef<CMob> > ?
00000044 m_lMobDeadProcess ZList<ZRef<CMob> > ?
00000058 m_pMobDamagedByMob ZRef<CMob> ?
00000060 m_tLastHitMobDamagedByMob dd ?
00000064 m_pGuidedMob    ZRef<CMob> ?
0000006C m_dwMobCrcKey   dd ?
00000070 CMobPool        ends
*/
class CMobPool
{
	CMobPoolVtbl* vfptr;
	ZMap<unsigned long, __POSITION*, unsigned long> m_mMob;
	ZList<ZRef<CMob>> m_lMob;
	ZList<ZRef<CMob>> m_lMobDelayedDead;
	ZList<ZRef<CMob>> m_lMobDeadProcess;
	ZRef<CMob> m_pMobDamagedByMob;
	int m_tLastHitMobDamagedByMob;
	ZRef<CMob> m_pGuidedMob;
	unsigned int m_dwMobCrcKey;
};

