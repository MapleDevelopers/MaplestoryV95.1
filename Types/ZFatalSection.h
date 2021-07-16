#pragma once

/*
00000000 ZFatalSectionData struc; (sizeof = 0x8, align = 0x4, copyof_1354)
00000000 _m_pTIB         dd ? ; offset
00000004 _m_nRef         dd ?
00000008 ZFatalSectionData ends
*/
template <class T>
struct ZFatalSectionData
{
	void* _m_pTIB;
	int _m_nRef;
};

/*
00000000 ZFatalSection   struc; (sizeof = 0x8, align = 0x4, copyof_1355)
00000000 baseclass_0     ZFatalSectionData ?
00000008 ZFatalSection   ends
*/
template <class T>
struct ZFatalSection : ZFatalSectionData<T>
{
};