#pragma once

// Defines a reference - counted object containing a T value as payload.
template <class T> 
class ZRef
{
	unsigned int Unknown1;
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