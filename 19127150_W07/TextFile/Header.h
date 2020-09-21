#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include "tokenizer.h"

using namespace std;

class Client
{
private:
	string _ID;
	string _fullname;
	int _balance;
	const string _separator = " - ";
public:
	Client();
	Client(const string& ID, const string& fullname, int balance);
	string ID();
	string fullname();
	int balance();
	void setID(string value);
	void setFullname(string value);
	void setBalance(int value);
	string toString();
	static Client parse(string line);
};

#endif