#include "random.h"

int main()
{
	Random rng;

	cout << rng.next() << endl;

	cout << rng.next(10) << endl;

	return 0;
}