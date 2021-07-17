#pragma once
#include <comutil.h>

/*
00000000 _bstr_t         struc; (sizeof = 0x4, align = 0x4, copyof_1514)
00000000 m_Data          dd ? ;
00000004 _bstr_t         ends
*/
struct Ztl_bstr_t : _bstr_t
{
	int m_Data;
};