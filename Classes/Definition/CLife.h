#pragma once
#include "CChatBalloon.h"
#include "ZRefCounted.h"
#include "../Interfaces/Definition/IGObj.h"
#include "../Interfaces/Definition/IVecCtrlOwner.h"

/*
00000000 CLife           struc; (sizeof = 0x88, align = 0x4, copyof_1992)
00000000 baseclass_0     IGObj ?
00000004 baseclass_4     IVecCtrlOwner ?
00000008 baseclass_8     ZRefCounted ?
00000014 m_chatBalloon   CChatBalloon ?
0000007C m_pLayerNameTag _com_ptr_t < _com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > 3 dup(? )
00000088 CLife           ends
*/
class CLife : IGObj, IVecCtrlOwner, ZRefCounted
{
	CChatBalloon m_chatBalloon;
	//m_pLayerNameTag
};