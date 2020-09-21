#ifndef _MONOMIAL_H_
#define _MONOMIAL_H_

#include <iostream>

using namespace std;

class Monomial
{
private:
	double coEfficient;
	int exponent;
public:
	Monomial();
	Monomial(double coEff, int exp);
	Monomial operator+(const Monomial& m);
	Monomial operator*(const Monomial& m);
	bool operator>(const Monomial& m);
	bool operator<(const Monomial& m);
	bool operator==(const Monomial& m);
	bool operator>=(const Monomial& m);
	bool operator<=(const Monomial& m);
	bool operator!=(const Monomial& m);
	Monomial& operator=(const Monomial& m);
	Monomial& operator+=(const Monomial& m);
	Monomial& operator*=(const Monomial& m);
	Monomial& operator++();
	Monomial operator++(int x);
	Monomial& operator--();
	Monomial operator--(int x);
	Monomial& operator!();
	friend ostream& operator<<(ostream& os, const Monomial& m);
	friend istream& operator>>(istream& is, Monomial& m);
};

#endif