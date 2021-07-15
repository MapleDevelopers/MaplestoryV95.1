#pragma once

// Defines a reference - counted object containing a T value as payload.
template <typename T>
struct ZRef
{
	Padding(0x04);
	T* p;

public:
	ZRef()
	{
		p = new T;
	}

	~ZRef()
	{
		p = NULL;
	}
};