#ifndef _SALARY_H_
#define _SALARY_H_
#pragma once

#include <iostream>
#include <string>
#include "random.h"
#include "Fakename.h"
#include <fstream>

using namespace std;

class Employee
{
protected:
	Fullname _name;
public:
	virtual float calcSalary() = 0;
	virtual string getEmployeeInfo() = 0;
};

class Daily : public Employee
{
private:
	int _numberOfDaysWork;
public:
	Daily();
	void checkIn();
	float calcSalary();
	string getEmployeeInfo();
};

class Manager : public Employee
{
private:
	int _experienceYears;
public:
	Manager();
	float calcSalary();
	string getEmployeeInfo();
};

class Worker : public Employee
{
private:
	int _numberOfProducts;
public:
	Worker();
	float calcSalary();
	string getEmployeeInfo();
};

class EzLifeCompany
{
private:
	vector<Employee*> _v;
public:
	void randomEmployee(int n);
	void printAllEmployee();
	float calcTotalSalary();
	void saveFile();
	void clearData();
};

#endif