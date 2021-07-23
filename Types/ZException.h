#pragma once

class ZException
{
public:
	ZException(HRESULT hr) : m_hr(hr)
	{
	}

	HRESULT Error()
	{
		return this->m_hr;
	}

private:
	const HRESULT m_hr;
};