#pragma once
ref class Shape
{
public:
	virtual int GetArea(int x);
	virtual int GetTotalSide(int x);
	bool IsShape() {
		return true;
	}
};

