#include "FakeBirthday.h"

int main()
{
	FakeBirthday d;

	cout << d.next().toString() << endl; //random

	cout << d.next().toString() << endl; //random

	cout << d.next().toString() << endl; //random

	cout << d.next(19).toString() << endl; //random with specific age

	cout << d.next(30).toString() << endl; //random with specific age

	cout << d.next(116).toString() << endl; //random with specific age

	cout << d.next(120).toString() << endl; //invalid age

	return 0;
}