#include "Dice.h"

Dice::Dice()
{
	for (int i = 0; i < 6; i++)
		counts[i] = 0;
}

int Dice::roll()
{
	int roll = rng.next(6) + 1;
	this->counts[roll - 1]++;
	return roll;
}

int Dice::getRollCounts(int num)
{
	num--;
	return this->counts[num];
}
