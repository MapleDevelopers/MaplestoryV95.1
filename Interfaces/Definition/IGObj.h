#pragma once

class IGObj
{
	~IGObj() = default;

public:
	virtual void Update(IGObj* this);
};