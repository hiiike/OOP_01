#include <iostream>
#include "Cursor.h"

using namespace std;

Cursor makeCursor(int x, int y)
{
	Cursor nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init (second)" << endl;
	return nn;
}

int main()
{

	Cursor k;
	k.Read();
	cout << endl;
	k.Display();
	int c, g;
	cout << endl << "Enter first argument "; cout << endl;
	cin >> c;
	cout << endl << "Enter second argument "; cout << endl;
	cin >> g;
	cout << endl;
	k.ChangeX(c);
	k.ChangeY(g);
	k.Display();
	return 0;
}
