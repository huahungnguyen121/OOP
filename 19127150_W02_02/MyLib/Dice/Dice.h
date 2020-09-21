#ifndef _DICE_H_
#define _DICE_H_

#include "..\Random\random.h"

class Dice
{
private:
	Random rng;
	int counts[6];
public:
	Dice();
	int roll();
	int getRollCounts(int num);
};

#endif