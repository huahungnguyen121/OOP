#include "FakeAddress.h"

int main()
{
	FakeHcmAddress a;

	for (int i = 0; i < 20; i++)
		cout << a.next().getFakeAddress() << endl;

	return 0;
}