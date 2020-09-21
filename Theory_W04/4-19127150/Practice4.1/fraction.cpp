#include "fraction.h"

int findGCD(int a, int b)
{
	if ((a == 0) || (b == 0))
		return 0;

	int temp = -1;
	while (temp != 0)
	{
		if (a > b)
		{
			temp = a % b;
			a = b;
			b = temp;
		}
		else
		{
			temp = b % a;
			b = temp;
		}
	}
	return a;
}

ostream& operator<<(ostream& os, const Fraction& p)
{
	os << p.m_num << "/" << p.m_denom << endl;
	return os;
}

istream& operator>>(istream& is, Fraction& p)
{
	cout << "Enter numerator: ";
	is >> p.m_num;
	cout << "Enter denominator: ";
	is >> p.m_denom;
	return is;
}

Fraction::Fraction()
{
	this->m_num = 0;
	this->m_denom = 1;
}

Fraction::Fraction(int value)
{
	this->m_num = value;
	this->m_denom = 1;
}

Fraction::Fraction(int num, int denom)
{
	this->m_num = num;
	this->m_denom = denom;
}

void Fraction::simplifyFraction()
{
    int gcd = findGCD(this->m_num, this->m_denom);
    this->m_num /= gcd;
    this->m_denom /= gcd;
}

Fraction& Fraction::operator+(const Fraction& p)
{
    Fraction result;
    result.m_num = this->m_num * p.m_denom + p.m_num * this->m_denom;
    result.m_denom = this->m_denom * p.m_denom;
	result.simplifyFraction();
    return result;
}

Fraction& Fraction::operator*(const Fraction& p)
{
    Fraction result;
    result.m_num = this->m_num * p.m_num;
    result.m_denom = this->m_denom * p.m_denom;
	result.simplifyFraction();
    return result;
}

bool Fraction::operator>(const Fraction& p)
{
	if (((float)this->m_num / this->m_denom) > ((float)p.m_num / p.m_denom))
		return true;
	else return false;
}

bool Fraction::operator<(const Fraction& p)
{
	if (((float)this->m_num / this->m_denom) < ((float)p.m_num / p.m_denom))
		return true;
	else return false;
}

bool Fraction::operator==(const Fraction& p)
{
	if (((float)this->m_num / this->m_denom) == ((float)p.m_num / p.m_denom))
		return true;
	else return false;
}

bool Fraction::operator>=(const Fraction& p)
{
	if (((float)this->m_num / this->m_denom) >= ((float)p.m_num / p.m_denom))
		return true;
	else return false;
}

bool Fraction::operator<=(const Fraction& p)
{
	if (((float)this->m_num / this->m_denom) <= ((float)p.m_num / p.m_denom))
		return true;
	else return false;
}

bool Fraction::operator!=(const Fraction& p)
{
	if (((float)this->m_num / this->m_denom) != ((float)p.m_num / p.m_denom))
		return true;
	else return false;
}

Fraction& Fraction::operator=(const Fraction& p)
{
	this->m_num = p.m_num;
	this->m_denom = p.m_denom;
	return *this;
}

Fraction& Fraction::operator+=(const Fraction& p)
{
	this->m_num = this->m_num * p.m_denom + p.m_num * this->m_denom;
	this->m_denom = this->m_denom * p.m_denom;
	this->simplifyFraction();
	return *this;
}

Fraction& Fraction::operator*=(const Fraction& p)
{
	this->m_num = this->m_num * p.m_num;
	this->m_denom = this->m_denom * p.m_denom;
	this->simplifyFraction();
	return *this;
}

Fraction& Fraction::operator++()
{
	this->m_num += this->m_denom;
	this->simplifyFraction();
	return *this;
}

Fraction Fraction::operator++(int x)
{
	Fraction temp;
	temp.m_num = this->m_num;
	temp.m_denom = this->m_denom;

	this->m_num += this->m_denom;
	this->simplifyFraction();

	return temp;
}

Fraction& Fraction::operator--()
{
	this->m_num -= this->m_denom;
	this->simplifyFraction();
	return *this;
}

Fraction Fraction::operator--(int x)
{
	Fraction temp;
	temp.m_num = this->m_num;
	temp.m_denom = this->m_denom;

	this->m_num -= this->m_denom;
	this->simplifyFraction();

	return temp;
}