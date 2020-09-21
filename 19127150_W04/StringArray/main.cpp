#include "header.h"

int main()
{
	string test = "12 14 46 27 3 1 90";

	StringManip s(test);

	cout << "Sum: " << s.findSum() << endl;

	cout << "Min number: " << s.findMin() << endl;

	s.print3Largest();

	cout << "\nAverage number: " << s.findAverage() << endl;

	s.printPrimeNum();

	return 0;
}