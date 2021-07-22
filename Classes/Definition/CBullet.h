#pragma once
#include "ZRefCounted.h"
#include "Point.h"

/*
00000000 CBullet         struc ; (sizeof=0x34, align=0x4, copyof_2076)
00000000 baseclass_0     ZRefCounted ?
0000000C m_pOrigin       _com_ptr_t<_com_IIID<IWzVector2D,&_GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4> > ?
00000010 m_pLayer        _com_ptr_t<_com_IIID<IWzGr2DLayer,&_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000014 m_bClockwise    dd ?
00000018 m_tStart        dd ?
0000001C m_tEnd          dd ?
00000020 m_ptStart       tagPOINT ?
00000028 m_ptEnd         tagPOINT ?
00000030 m_pVecTarget    _com_ptr_t<_com_IIID<IWzVector2D,&_GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4> > ?
00000034 CBullet         ends
*/
class CBullet : ZRefCounted
{
	//m_pOrigin
	//m_pLayer
	bool m_bClockwise;
	int m_tStart;
	int m_tEnd;
	POINT m_ptStart;
	POINT m_ptEnd;
	//m_pVecTarget
};