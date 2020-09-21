#ifndef _STORE_H_
#define _STORE_H_

#include <iostream>
#include <vector>
#include <string>
#include "random.h"
#include "tokenizer.h"

using namespace std;

class State
{
private:
	vector<int> a;
public:
	void clear();
	void push_back(int num);
	string toString(string separator = " ");
};

class Store
{
private:
	State _state;
	Random _rng;
public:
	void generateRandomNumbers(int n = 10, int maximum = 999);
	void showCurrentNumbers();
	void getNumbersFromKeyboard();
};

#endif