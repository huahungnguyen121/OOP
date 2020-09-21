#include "FakeTel.h"

int main()
{
	FakeTel a;

	for (int i = 0; i < 20; i++)
		cout << a.next() << endl;

	return 0;
}