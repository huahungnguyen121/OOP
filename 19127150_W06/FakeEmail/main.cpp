#include "FakeEmail.h"

int main()
{
	FakeEmail a;

	for (int i = 0; i < 20; i++)
		cout << a.next() << endl;

	return 0;
}