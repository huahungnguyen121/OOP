#ifndef _FAKENAME_H_
#define _FAKENAME_H_

#include <iostream>
#include <vector>
#include <string>
#include "random.h"

using namespace std;

class Fullname
{
private:
	string _firstName;
	string _middleName;
	string _lastName;
public:
	Fullname();
	Fullname(string first, string middle, string last);
	Fullname& operator=(const Fullname& name);
	string getFakeName();
};

class Fakename
{
private:
	Random _rng;
	vector<string> _firstName;
	vector<string> _middleName;
	vector<string> _lastName;
public:
	Fakename();
	Fullname next();
};

#endif