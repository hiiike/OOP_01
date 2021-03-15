#pragma once

class Cursor
{
	int first, second;
public:

	void SetFirst(int value);
	void SetSecond(unsigned int value);
	void Read();
	void Display() const;
	void ChangeX(int N);
	void ChangeY(int G);
	bool Init(int x, int y);
};



