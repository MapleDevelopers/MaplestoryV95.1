#include "../Definition/CWnd.h"

CWnd::CWnd()
{
    IUIMsgHandler::vfptr = (IUIMsgHandlerVtbl *)&IUIMsgHandler::`vftable';
    ZRefCounted::vfptr = (ZRefCountedVtbl *)&ZRefCounted::`vftable';
    _m_nRef = 0;
    _m_pPrev = 0;
    IGObj::vfptr = (IGObjVtbl *)&CWnd::`vftable'{for `IGObj'};
    IUIMsgHandler::vfptr = (IUIMsgHandlerVtbl *)&CWnd::`vftable'{for `IUIMsgHandler'};
    ZRefCounted::vfptr = (ZRefCountedVtbl *)&CWnd::`vftable'{for `ZRefCounted'};
    m_dwWndKey = 0;
    m_pLayer.m_pInterface = 0;
    m_pAnimationLayer.m_pInterface = 0;
    m_pOverlabLayer.m_pInterface = 0;
    m_nBackgrndX = 0;
    m_nBackgrndY = 0;
    SECPOINT::SECPOINT(&m_ptCursorRel);
    m_lpChildren.vfptr = (ZList<ZRef<CCtrlWnd> >Vtbl *)&ZList<ZRef<CCtrlWnd>>::`vftable';
    m_lpChildren._m_uCount = 0;
    m_lpChildren._m_pHead = 0;
    m_lpChildren._m_pTail = 0;
    m_pFocusChild = 0;
    m_pBackgrnd.m_pInterface = 0;
    m_origin = Origin_LT;
    CWnd::OnEndMoveWnd(this);
}

CWnd::OnEndMoveWnd()
{
}