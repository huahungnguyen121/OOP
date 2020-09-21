#ifndef _TIME_H_
#define _TIME_H_

#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include "tokenizer.h"

using namespace std;

class Time
{
private:
	int _absSec;
public:
	Time();
	Time(int hour, int min, int sec);
	Time& operator=(const Time& t);
	string toString();
	string toString2();
	Time parse(string time);
	bool tryParse(string time, Time& t);
	bool isValid(string time);
};

#endif