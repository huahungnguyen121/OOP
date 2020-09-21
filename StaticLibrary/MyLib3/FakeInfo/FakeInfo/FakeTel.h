#ifndef _FAKETEL_H_
#define _FAKETEL_H_

#include <iostream>
#include <vector>
#include <string>
#include "random.h"

using namespace std;

class FakeTel
{
private:
	Random _rng;
	vector<string> _phoneOperator;
	string _phoneNumber;
public:
	FakeTel();
	string next(); //get fake phone number;
};

#endif