#include "Fakename.h"

int main()
{
	Fakename a;
	for (int i = 0; i < 20; i++)
		cout << a.next().getFakeName() << endl;

	return 0;
}