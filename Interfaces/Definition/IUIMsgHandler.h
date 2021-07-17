#pragma once
#include "ZList.h"
#include "ZArray.h"
#include "ZXString.h"
#include "IDraggable.h"

class IUIMsgHandler
{
	~IUIMsgHandler() = default;

public:
	virtual void OnKey(unsigned int wParam, unsigned int lParam) = 0;
	virtual void OnMouseButton(unsigned int msg, unsigned int wParam, int rx, int ry) = 0;
	virtual void OnMouseEnter(bool bEnter) = 0;
	virtual void OnDraggableMove(int nState, IDraggable* pObj, int rx, int ry) = 0;

	virtual int OnMouseMove(int rx, int ry) = 0;
	virtual int OnMouseWheel(int rx, int ry, int nWheel) = 0;
	virtual int OnSetFocus(int bFocus) = 0;

	virtual void SetEnable(bool bEnable) = 0;
	virtual void SetShow(bool bShow) = 0;
	virtual bool IsEnabled() = 0;
	virtual bool IsShown() = 0;

	virtual int GetAbsLeft(IUIMsgHandler*) = 0;
	virtual int GetAbsTop(IUIMsgHandler*) = 0;
	virtual CRTTI GetRTTI(IUIMsgHandler*) = &IUIMsgHandler::ms_RTTI_IUIMsgHandler;
	virtual CRTTI IsKindOf(IUIMsgHandler*, CRTTI* pRTTI);
	virtual void ClearToolTip(IUIMsgHandler*) = 0;
	virtual void OnIMEModeChange(IUIMsgHandler*, char cMode) = 0;
	virtual void OnIMEResult(IUIMsgHandler*, const char* sComp) = 0;
	virtual void OnIMEComp(IUIMsgHandler*, const char* sComp, ZArray<unsigned long>* adwCls, unsigned int nClsIdx, int nCursor, ZList<ZXString<char>>* lCand, int nBegin, int nPage, int nCur) = 0;
};