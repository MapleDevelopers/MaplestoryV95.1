#pragma once
#include "_ZltSecure_.h"

/*
00000000 SECRECT         struc; (sizeof = 0x30, align = 0x4, copyof_1613)
00000000 _ZtlSecureTear_left dd 2 dup(? )
00000008 _ZtlSecureTear_left_CS dd ?
0000000C _ZtlSecureTear_top dd 2 dup(? )
00000014 _ZtlSecureTear_top_CS dd ?
00000018 _ZtlSecureTear_right dd 2 dup(? )
00000020 _ZtlSecureTear_right_CS dd ?
00000024 _ZtlSecureTear_bottom dd 2 dup(? )
0000002C _ZtlSecureTear_bottom_CS dd ?
00000030 SECRECT         ends
*/
struct SECRECT
{
private:
	int _ZtlSecureTear_left[2];
	unsigned int _ZtlSecureTear_left_CS;
	int _ZtlSecureTear_top[2];
	unsigned int _ZtlSecureTear_top_CS;
	int _ZtlSecureTear_right[2];
	unsigned int _ZtlSecureTear_right_CS;
	int _ZtlSecureTear_bottom[2];
	unsigned int _ZtlSecureTear_bottom_CS;

public:
	SECRECT()
	{
		SetRect(0, 0, 0, 0);
	}

	SECRECT(int l, int t, int r, int b)
	{
		SetRect(l, t, r, b);
	}

	void SetRect(int l, int t, int r, int b)
	{
		this->_ZtlSecureTear_left_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_left, l);
		this->_ZtlSecureTear_top_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_top, t);
		this->_ZtlSecureTear_right_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_right, r);
		this->_ZtlSecureTear_bottom_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_bottom, b);
	}

	void SetRectEmpty()
	{
		this->_ZtlSecureTear_left_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_left, NULL);
		this->_ZtlSecureTear_top_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_top, NULL);
		this->_ZtlSecureTear_right_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_right, NULL);
		this->_ZtlSecureTear_bottom_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_bottom, NULL);
	}

	BOOL IsRectEmpty()
	{
		if (GetLeft() < GetRight() && GetTop() < GetBottom())
		{
			return FALSE;
		}

		return TRUE;
	}

	int _ZtlSecureGet_right()
	{
		return _ZtlSecureFuse_<int>(this->_ZtlSecureTear_right, this->_ZtlSecureTear_right_CS);
	}

	int _ZtlSecureGet_left()
	{
		return _ZtlSecureFuse_<int>(this->_ZtlSecureTear_left, this->_ZtlSecureTear_left_CS);
	}

	int GetTop()
	{
		return _ZtlSecureFuse_<int>(this->_ZtlSecureTear_top, this->_ZtlSecureTear_top_CS);
	}

	int GetBottom()
	{
		return _ZtlSecureFuse_<int>(this->_ZtlSecureTear_bottom, this->_ZtlSecureTear_bottom_CS);
	}

	void PutRight(int r)
	{
		this->_ZtlSecureTear_right_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_right, r);
	}

	void PutLeft(int l)
	{
		this->_ZtlSecureTear_left_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_left, l);
	}

	void PutTop(int t)
	{
		this->_ZtlSecureTear_top_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_top, t);
	}

	void PutBottom(int b)
	{
		this->_ZtlSecureTear_bottom_CS = _ZtlSecureTear_<int>(this->_ZtlSecureTear_bottom, b);
	}
};