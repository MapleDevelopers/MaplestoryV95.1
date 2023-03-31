#pragma once
#include "CDialog.h"
#include "CLogin.h"

class CConnectionNoticeDlg : CDialog 
{
public:
    CLogin* m_pLogin;
    ZRef<CCtrlButton> m_pBtCancel;
    _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf>> m_pLayerAnimationBar;

     CConnectionNoticeDlg(CLogin* pLogin);
    ~CConnectionNoticeDlg();
    void OnCreate(CConnectionNoticeDlg *this, void *pData)
    void OnButtonClicked(CConnectionNoticeDlg *this, unsigned int nId)
};