#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <vector>
#include <string>
#include "tokenizer.h"

using namespace std;

class StringManip
{
private:
	Tokenizer token;
	vector<int> array;
	bool checkPrime(const int& x);
public:
	StringManip(string arr);
	int findSum();
	int findMin();
	void print3Largest();
	float findAverage();
	void printPrimeNum();
};

#endif