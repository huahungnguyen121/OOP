#ifndef _FARM_H_
#define _FARM_H_
#pragma once

#include <iostream>
#include "random.h"
#include <string>
#include <vector>

using namespace std;

class Animal
{
protected:
	int _dailyMilk;
public:
	virtual int getMilk(int) = 0;
};

class Cow : public Animal
{
public:
	Cow();
	int getMilk(int day);
};

class Sheep : public Animal
{
public:
	Sheep();
	int getMilk(int day);
};

class Goat : public Animal
{
public:
	Goat();
	int getMilk(int day);
};

class Farm
{
private:
	int _day;
	vector<Animal*> _v;
public:
	Farm();
	int estimateTotalMilk();
	void clearMem();
};

#endif