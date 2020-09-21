#include "monomial.h"

Monomial::Monomial()
{
	this->coEfficient = 0;
	this->exponent = 0;
}

Monomial::Monomial(double coEff, int exp)
{
	this->coEfficient = coEff;
	this->exponent = exp;
}

Monomial Monomial::operator+(const Monomial& m)
{
	Monomial result;
	result.exponent = this->exponent;
	result.coEfficient = this->coEfficient + m.coEfficient;
	return result;
}

Monomial Monomial::operator*(const Monomial& m)
{
	Monomial result;
	result.exponent = this->exponent * m.exponent;
	result.coEfficient = this->coEfficient * m.coEfficient;
	return result;
}

bool Monomial::operator>(const Monomial& m)
{
	if (this->exponent == m.exponent)
	{
		if (this->coEfficient > m.coEfficient)
			return true;
		else return false;
	}
	else
	{
		if (this->exponent > m.exponent)
			return true;
		else return false;
	}
}

bool Monomial::operator<(const Monomial& m)
{
	if (this->exponent == m.exponent)
	{
		if (this->coEfficient < m.coEfficient)
			return true;
		else return false;
	}
	else
	{
		if (this->exponent < m.exponent)
			return true;
		else return false;
	}
}

bool Monomial::operator==(const Monomial& m)
{
	if ((this->coEfficient == m.coEfficient) && (this->exponent == m.exponent))
		return true;
	else return false;
}

bool Monomial::operator>=(const Monomial& m)
{
	if (this->exponent == m.exponent)
	{
		if (this->coEfficient < m.coEfficient)
			return false;
		else return true;
	}
	else
	{
		if (this->exponent > m.exponent)
			return true;
		else return false;
	}
}

bool Monomial::operator<=(const Monomial& m)
{
	if (this->exponent == m.exponent)
	{
		if (this->coEfficient > m.coEfficient)
			return false;
		else return true;
	}
	else
	{
		if (this->exponent < m.exponent)
			return true;
		else return false;
	}
}

bool Monomial::operator!=(const Monomial& m)
{
	if ((this->coEfficient != m.coEfficient) || (this->exponent != m.exponent))
		return true;
	else return false;
}

Monomial& Monomial::operator=(const Monomial& m)
{
	this->coEfficient = m.coEfficient;
	this->exponent = m.exponent;
	return *this;
}

Monomial& Monomial::operator+=(const Monomial& m)
{
	this->coEfficient = this->coEfficient + m.coEfficient;
	return *this;
}

Monomial& Monomial::operator*=(const Monomial& m)
{
	this->coEfficient = this->coEfficient * m.coEfficient;
	this->exponent = this->exponent * m.exponent;
	return *this;
}

Monomial& Monomial::operator++()
{
	this->exponent++;
	return *this;
}

Monomial Monomial::operator++(int x)
{
	Monomial result;
	result.coEfficient = this->coEfficient;
	result.exponent = this->exponent;
	this->exponent++;
	return result;
}

Monomial& Monomial::operator--()
{
	this->exponent--;
	return *this;
}

Monomial Monomial::operator--(int x)
{
	Monomial result;
	result.coEfficient = this->coEfficient;
	result.exponent = this->exponent;
	this->exponent--;
	return result;
}

Monomial& Monomial::operator!()
{
	this->coEfficient = this->coEfficient * this->exponent;
	this->exponent--;
	return *this;
}

ostream& operator<<(ostream& os, const Monomial& m)
{
	os << m.coEfficient << "x^" << m.exponent << endl;
	return os;
}

istream& operator>>(istream& is, Monomial& m)
{
	cout << "Enter Co-Efficient: ";
	is >> m.coEfficient;
	cout << "Enter Exponent: ";
	is >> m.exponent;
	return is;
}
