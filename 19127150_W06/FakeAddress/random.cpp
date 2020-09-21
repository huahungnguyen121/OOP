#include "random.h"

int Random::next(int n)
{
	if (n == -1)
		return rand();
	else
		return rand() % n;
}