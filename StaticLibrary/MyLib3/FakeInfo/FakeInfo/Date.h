#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include "tokenizer.h"

using namespace std;

class Date
{
private:
	int _day;
	int _month;
	int _year;
public:
	Date();
	Date(int day, int month, int year);
	Date& operator=(const Date& d);
	string toString();
	Date parse(string date);
	bool tryParse(string date, Date& d);
	bool isValid(string date);
	bool isLeapYear(int year);
};

#endif