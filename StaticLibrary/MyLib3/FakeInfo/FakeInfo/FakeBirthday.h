#ifndef _FAKEBIRTHDAY_H_
#define _FAKEBIRTHDAY_H_

#include <iostream>
#include <string>
#include "random.h"
#include "tokenizer.h"
#include "Date.h"

using namespace std;

class FakeBirthday
{
private:
	Random _rng;
public:
	Date next(int age = -1);
};

#endif