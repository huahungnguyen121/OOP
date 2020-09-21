#ifndef _FRACTION_H_
#define _FRACTION_H_

#include <iostream>

using namespace std;

int findGCD(int a, int b);

class Fraction
{
private:
	int m_num;
	int m_denom;
public:
	Fraction();
	Fraction(int value);
	Fraction(int num, int denom);
	void simplifyFraction();
	Fraction& operator+(const Fraction& p);
	Fraction& operator*(const Fraction& p);
	bool operator>(const Fraction& p);
	bool operator<(const Fraction& p);
	bool operator==(const Fraction& p);
	bool operator>=(const Fraction& p);
	bool operator<=(const Fraction& p);
	bool operator!=(const Fraction& p);
	Fraction& operator=(const Fraction& p);
	Fraction& operator+=(const Fraction& p);
	Fraction& operator*=(const Fraction& p);
	Fraction& operator++();
	Fraction operator++(int x);
	Fraction& operator--();
	Fraction operator--(int x);
	friend ostream& operator<<(ostream& os, const Fraction& p);
	friend istream& operator>>(istream& is, Fraction& p);
};

#endif