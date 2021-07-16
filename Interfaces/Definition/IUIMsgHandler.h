#pragma once
#include "../Classes/Definition/ZList.h"
#include "../Classes/Definition/ZArray.h"
#include "../Classes/Definition/ZXString.h"

class IUIMsgHandler
{
	~IUIMsgHandler() = default;

public:
	virtual void OnKey(unsigned int wParam, unsigned int lParam) = 0;
	virtual int OnSetFocus(int) = 0;
	virtual void OnMouseButton(unsigned int msg, unsigned int wParam, int rx, int ry) = 0;
	virtual int OnMouseMove(int rx, int ry) = 0;
	virtual int OnMouseWheel(int, int, int) = 0;
	virtual void OnMouseEnter(bool bEnter) = 0;
	virtual void OnDraggableMove(int, void*, int, int) = 0;
	virtual void SetEnable(bool bEnable) = 0;
	virtual bool IsEnabled() = 0;
	virtual void SetShow(bool bShow) = 0;
	virtual bool IsShown() = 0;
	virtual int GetAbsLeft(IUIMsgHandler*) = 0;
	virtual int* GetAbsTop(IUIMsgHandler*) = 0;
	virtual void ClearToolTip(IUIMsgHandler*) = 0;
	virtual void OnIMEModeChange(IUIMsgHandler*, char) = 0;
	virtual void OnIMEResult(IUIMsgHandler*, const char*) = 0;
	virtual void OnIMEComp(IUIMsgHandler*, const char*, ZArray<unsigned long>*, unsigned int, int, ZList<ZXString<char>>*, int, int, int) = 0;
};