#ifndef _HEADER_H_
#define _HEADER_H_

#pragma once

#include <iostream>

using namespace std;

class Animal
{
public:
	virtual int tellSpeed() = 0;
	virtual string tellName() = 0;
};

class Cheetah : public Animal
{
public:
	int tellSpeed();
	string tellName();
};

class Antelope : public Animal
{
public:
	int tellSpeed();
	string tellName();
};

class Lion : public Animal
{
public:
	int tellSpeed();
	string tellName();
};

class Dog : public Animal
{
public:
	int tellSpeed();
	string tellName();
};

class Human : public Animal
{
public:
	int tellSpeed();
	string tellName();
};

//if we add the horse to the table
class Horse : public Animal
{
public:
	int tellSpeed();
	string tellName();
};

void tellWin(Animal* a1, Animal* a2);

#endif