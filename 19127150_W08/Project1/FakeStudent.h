#ifndef _FAKESTUDENT_H_
#define _FAKESTUDENT_H_

#include "Date.h"
#include "FakeAddress.h"
#include "FakeBirthday.h"
#include "FakeEmail.h"
#include "Fakename.h"
#include "FakeStudent.h"
#include "FakeTel.h"
#include "Time.h"
#include <string>
#include <vector>
#include <random>
#include <fstream>

using namespace std;

class Student
{
private:
	string _ID;
	Fullname _fullname;
	Date _DoB;
	string _address;
	string _email;
	string _phoneNum;
	float _avg;
public:
	Student();
	Student(string ID, Fullname name, Date DoB, string address, string email, string phoneNum, float avg);
	Student& operator=(const Student& s);
	string toString();
	/*
		Compare Avg Point:
		1: this > s
		0: this = s
		-1: this < s
	*/
	int compareAvg(const Student& s);
};

class FakeStudent
{
private:
	Fakename _rng1;
	FakeBirthday _rng2;
	FakeEmail _rng3;
	FakeTel _rng4;
	FakeHcmAddress _rng5;
	default_random_engine _generator;
	Random _rng;
public:
	Student next();
};

#endif