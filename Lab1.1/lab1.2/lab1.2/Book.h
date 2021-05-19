#pragma once
#include <string>


using namespace std;

class Book
{
private:
	struct Book1
	{
		string name;
		string writer;
		string edition;
		int year;
	};
	Book1* s = new Book1[4];

public:

	bool setYear(int index, int value);

	void Init();

	void Search(string name);

	void Read();

	void const Display();

};
