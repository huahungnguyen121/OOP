#ifndef _RANDOM_H_
#define _RANDOM_H_

#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Random
{
public:
	Random()
	{
		srand(time(NULL));
	}
	int next(int n = -1);
};

#endif