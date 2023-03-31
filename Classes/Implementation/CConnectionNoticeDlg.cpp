#include "../Definition/CConnectionNoticeDlg.h"

CConnectionNoticeDlg::CConnectionNoticeDlg(CLogin* pLogin)
{
  CDialog::CDialog(this);
  
  if (this == (CConnectionNoticeDlg*)-145)
    TSingleton<CConnectionNoticeDlg>::ms_pInstance = 0;
  else
    TSingleton<CConnectionNoticeDlg>::ms_pInstance = this;

  this->CDialog::CWnd::IGObj::vfptr = (IGObjVtbl *)&CConnectionNoticeDlg::`vftable'{for `IGObj'};
  this->CDialog::CWnd::IUIMsgHandler::vfptr = (IUIMsgHandlerVtbl *)&CConnectionNoticeDlg::`vftable'{for `IUIMsgHandler'};
  this->CDialog::CWnd::ZRefCounted::vfptr = (ZRefCountedVtbl *)&CConnectionNoticeDlg::`vftable'{for `ZRefCounted'};

  this->m_pLogin = pLogin;
  this->m_pBtCancel.p = 0;
  this->m_pLayerAnimationBar.m_pInterface = 0;

  StringPool *pStrPool = StringPool::GetInstance();
  ZXString<unsigned short> *pDlgTitle = StringPool::GetStringW(pStrPool, (ZXString<unsigned short> *)&pLogin, 0x589u);
  CDialog::CreateDlg(this, pDlgTitle->_m_pStr, 1, 0, 0);

  if (pLogin)
    ZXString<unsigned short>::_Release((ZXString<unsigned short>::_ZXStringData *)&pLogin[-1].m_bCharSale);
}

CConnectionNoticeDlg::~CConnectionNoticeDlg() 
{
    this->CDialog::CWnd::IGObj::vfptr = (IGObjVtbl*)&CConnectionNoticeDlg::`vftable'{for `IGObj'};
    this->CDialog::CWnd::IUIMsgHandler::vfptr = (IUIMsgHandlerVtbl*)&CConnectionNoticeDlg::`vftable'{for `IUIMsgHandler'};
    this->CDialog::CWnd::ZRefCounted::vfptr = (ZRefCountedVtbl*)&CConnectionNoticeDlg::`vftable'{for `ZRefCounted'};

    IWzGr2DLayer* layer = this->m_pLayerAnimationBar.m_pInterface;
    if (layer) {
        this->m_pLayerAnimationBar.m_pInterface = nullptr;
        layer->vfptr->Release(layer);
    }

    if (this->m_pLayerAnimationBar.m_pInterface) {
        this->m_pLayerAnimationBar.m_pInterface->vfptr->Release(this->m_pLayerAnimationBar.m_pInterface);
    }

    if (this->m_pBtCancel.p) {
        ZRef<CCtrlButton>::_ReleaseRaw(&this->m_pBtCancel, 0);
        this->m_pBtCancel.p = nullptr;
    }

    TSingleton<CConnectionNoticeDlg>::ms_pInstance = nullptr;

    CDialog::~CDialog();
}

void CConnectionNoticeDlg::OnCreate(CConnectionNoticeDlg *this, void *pData)
{
  StringPool *pPool = StringPool::GetInstance();
  const ZXString<unsigned short> *pString = StringPool::GetStringW(pPool, (ZXString<unsigned short> *)&result, 0x58Au);

  CCtrlButton::CREATEPARAM paramButton;
  paramButton.sUOL._m_pStr = 0;
  paramButton.bAcceptFocus = 1;
  paramButton.bDrawBack = 0;
  paramButton.bAnimateOnce = 0;
  int v12 = 0;

  ZXString<unsigned short>::operator=(&paramButton.sUOL, pString);

  if (*(_DWORD *)result.gap0)
    ZXString<unsigned short>::_Release((ZXString<unsigned short>::_ZXStringData *)(*(_DWORD *)result.gap0 - 12));

  CCtrlButton *pButton = (CCtrlButton *)ZAllocEx<ZAllocAnonSelector>::Alloc(&ZAllocEx<ZAllocAnonSelector>::_s_alloc, 0xADCu);
  
  if (pButton)
    CCtrlButton::CCtrlButton(pButton);
  else
    v6 = 0;

  if (v6 && (v7 = v6 + 8) != 0)
  {
    CCtrlButton *pButtonRef = (CCtrlButton *)(v7 - 8);
    if (v7 != 8)
      InterlockedIncrement(&pButtonRef->_m_nRef);
  }

  CCtrlButton *pPrevButton = this->m_pBtCancel.p;
  this->m_pBtCancel.p = pButton;

  result.p = pPrevButton;
  if (pPrevButton)
    ZRef<CCtrlButton>::_ReleaseRaw(&result, 0);

  this->m_pBtCancel.p->vfptr[10].Update(this->m_pBtCancel.p, this, 1000, 100, 106, 0, &paramButton);

  v12 = -1;
  if (paramButton.sUOL._m_pStr)
    ZXString<unsigned short>::_Release((ZXString<unsigned short>::_ZXStringData *)paramButton.sUOL._m_pStr - 1);
}