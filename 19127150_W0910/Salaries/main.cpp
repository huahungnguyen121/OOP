#include "Salary.h"

void main()
{
	Random rng;

	int numberOfEmployee = 10 + rng.next(11);

	EzLifeCompany c;

	c.randomEmployee(numberOfEmployee);

	c.printAllEmployee();

	cout << "\nTotal Salary: " << (int)c.calcTotalSalary() << endl;

	c.saveFile();

	c.clearData();
}