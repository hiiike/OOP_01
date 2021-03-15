#include <iostream>
#include <cmath>
#include "Cursor.h"

using namespace std;

void Cursor::SetFirst(int value)
{
	first = value;
}

void Cursor::SetSecond(unsigned int value)
{
	second = value;
}

void Cursor::ChangeX(int N)
{
	first = N;
}

void Cursor::ChangeY(int G)
{
	second = G;
}

bool Cursor::Init(int x, int y)
{
	first = x;
	second = y;

	if (x <= 200 && x > 0)
	{

		return true;
	}
	else
	{
		cout << "Wrong value" << endl;
		return 0;
	}
	if (y <= 200 && y > 0)
	{

		return true;
	}
	else
	{
		cout << "Wrong value" << endl;
		return 0;
	}
}
void Cursor::Read()
{
	int x, y;
	do {
		cout << "first = ? ";
		cin >> x;
		cout << "second = ? ";
		cin >> y;
	} while (!Init(x, y));
}
void Cursor::Display() const
{
	cout << "first = " << first << endl << "second = " << second << endl;
}
