#ifndef _TOKENIZER_H_
#define _TOKENIZER_H_

#include <iostream>
#include <vector>

using namespace std;

class Tokenizer
{
public:
	static vector<string> split(string haystack, string separator = " ");
};

#endif