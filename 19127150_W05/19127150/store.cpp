#include "store.h"

void State::clear()
{
	this->a.clear();
}

void State::push_back(int num)
{
	this->a.push_back(num);
}

string State::toString(string separator)
{
	string result = "";

	for (int i = 0; i < this->a.size(); i++)
	{
		if (i == this->a.size() - 1)
		{
			result = result + to_string(this->a[i]);
			break;
		}
		result = result + to_string(this->a[i]) + separator;
	}

	return result;
}

void Store::generateRandomNumbers(int n, int maximum)
{
	this->_state.clear();
	for (int i = 0; i < n; i++)
	{
		this->_state.push_back(this->_rng.next(maximum));
	}
}

void Store::showCurrentNumbers()
{
	cout << this->_state.toString() << endl;
}

void Store::getNumbersFromKeyboard()
{
	this->_state.clear();
	string buffer = "";
	cout << "Enter numbers (separate with space): \n";
	getline(cin, buffer);

	Tokenizer tk;

	tk.split(buffer);

	for (int i = 0; i < tk.tokens.size(); i++)
		this->_state.push_back(stoi(tk.tokens[i]));
}