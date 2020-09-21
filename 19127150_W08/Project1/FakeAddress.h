#ifndef _FAKEADDRESS_H_
#define _FAKEADDRESS_H_

#include <iostream>
#include <vector>
#include <string>
#include "random.h"

using namespace std;

class Address
{
private:
	string _number;
	string _street;
	string _ward;
	string _district;
	string _city;
public:
	Address(string num, string street, string ward, string district, string city); //initialize new address
	string getFakeAddress(); //get address string
};

class FakeHcmAddress
{
private:
	Random _rng;
	vector<string> _number;
	vector<string> _street;
	vector<string> _ward;
	vector<string> _district;
	string _city;
public:
	FakeHcmAddress(); //initialize data
	Address next(); //random new fake address
};

#endif