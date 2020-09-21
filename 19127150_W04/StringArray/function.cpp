#include "header.h"

StringManip::StringManip(string arr)
{
	this->token.split(arr);

	for (int i = 0; i < this->token.tokens.size(); i++)
		this->array.push_back(stoi(this->token.tokens[i]));
}

int StringManip::findSum()
{
	int sum = 0;

	for (int i = 0; i < this->token.tokens.size(); i++)
		sum += this->array[i];

	return sum;
}

int StringManip::findMin()
{
	int min = this->array[0];
	for (int i = 1; i < this->token.tokens.size(); i++)
	{
		if (this->array[i] < min)
			min = this->array[i];
	}

	return min;
}

void StringManip::print3Largest()
{
	for (int i = 0; i < this->token.tokens.size() - 1; i++)
		for (int j = i + 1; j < this->token.tokens.size(); j++)
			if (this->array[i] < this->array[j])
			{
				int temp = this->array[i];
				this->array[i] = this->array[j];
				this->array[j] = temp;
			}
	cout << "\n3 largest numbers: ";
	cout << this->array[0] << " " << this->array[1] << " " << this->array[2] << endl;
}

float StringManip::findAverage()
{
	return (float)this->findSum() / this->token.tokens.size();
}

void StringManip::printPrimeNum()
{
	cout << "\nPrime number: ";
	for (int i = 0; i < this->token.tokens.size(); i++)
		if (this->checkPrime(this->array[i]))
			cout << this->array[i] << " ";
}

bool StringManip::checkPrime(const int& x)
{
	if (x < 2)
		return false;

	for (int i = 2; i <= x / 2; i++)
		if (x % i == 0)
			return false;
	return true;
}