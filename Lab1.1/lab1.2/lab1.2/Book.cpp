#include "Book.h"
#include <iostream>
#include <search.h>

using namespace std;



bool Book::setYear(int index, int value)
{
	if (value > 0)
	{
		s[index].year = value;
		return true;
	}
	else
	{
		s[index].year = -value;
		return false;
	}
}

void Book::Init()
{
	string n, t, y;
	int o;
	for (int i = 1; i < 4; i++)
	{
		cout << "Enter name "; cin >> n; cout << endl;
		s[i].name = n;
		cout << "Enter writer "; cin >> t; cout << endl;
		s[i].writer = t;
		cout << "Enter edition "; cin >> y; cout << endl;
		s[i].edition = y;
		cout << "Enter year "; cin >> o; cout << endl;
		s[i].year = o;
	}

}

void Book::Search(string name)
{
	bool Flag = true;
	for (int i = 0; i < 3; i++)
	{
		if (s[i].name == name && Flag)
		{
			cout << "Book found " << i + 1;
			Flag = false;

		}
	}
	if (Flag) cout << "Book not found";

}





void Book::Read()
{
	string n, t, y;
	int o;


	cout << "Enter name "; cin >> n; cout << endl;
	s[0].name = n;
	cout << "Enter writer "; cin >> t; cout << endl;
	s[0].writer = t;
	cout << "Enter edition "; cin >> y; cout << endl;
	s[0].edition = y;
	cout << "Enter year "; cin >> o; cout << endl;
	s[0].year = o;


}

void const Book::Display()
{
	for (int i = 0; i < 4; i++)
	{
		cout << " name = " << s[i].name << endl;
		cout << " Writer = " << s[i].writer << endl;
		cout << " Edition = " << s[i].edition << endl;
		cout << " Year = " << s[i].year << endl;
	}
}
