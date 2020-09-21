#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	string _name;
	int _getInYear;
public:
	Employee();
	Employee(string name, int getInYear);
	int calcBonus();
};

class Worker : public Employee
{
private:
	int _productAmount;
public:
	Worker() : Employee() { this->_productAmount = 0; };
	Worker(string name, int getInYear, int productAmount) : Employee(name, getInYear) { this->_productAmount = productAmount; };
	int calcSalary();
};

class Officer : public Employee
{
private:
	int _basicSalary;
	int _vacation;
public:
	Officer();
	Officer(string name, int getInYear, int basicSalary, int vacation);
	int calcSalary();
};

#endif