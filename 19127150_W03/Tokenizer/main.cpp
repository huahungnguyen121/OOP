#include "tokenizer.h"

int main()
{
	Tokenizer tokens;
	string haystack = "   HELLO      WORLD     WAR       3     ";
	string separator = " ";

	tokens.split(haystack, separator);
	tokens.printTokens();
	
	return 0;
}