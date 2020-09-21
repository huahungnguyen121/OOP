#include "Header.h"

Employee::Employee()
{
    this->_name = "";
    this->_getInYear = 0;
}

Employee::Employee(string name, int getInYear)
{
    this->_name = name;
    this->_getInYear = getInYear;
}

int Employee::calcBonus()
{
    return 100 + 10 * this->_getInYear;
}

int Worker::calcSalary()
{
    return this->_productAmount * 10 + Employee::calcBonus();
}

Officer::Officer() : Employee()
{
    this->_basicSalary = 0;
    this->_vacation = 0;
}

Officer::Officer(string name, int getInYear, int basicSalary, int vacation) : Employee(name, getInYear)
{
    this->_basicSalary = basicSalary;
    this->_vacation = vacation;
}

int Officer::calcSalary()
{
    return this->_basicSalary - this->_vacation * 10 + Employee::calcBonus();
}