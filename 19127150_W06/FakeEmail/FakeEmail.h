#ifndef _FAKEEMAIL_H_
#define _FAKEEMAIL_H_

#include <iostream>
#include <vector>
#include <string>
#include "random.h"
#include "tokenizer.h"
#include "..\FakeName\Fakename.h"

class FakeEmail
{
private:
	vector<string> _domains;
	Random _rng;
	Fakename _fullname;
	Tokenizer _tk;
public:
	FakeEmail();
	void convertToLower(string& s);
	string next();
};

#endif