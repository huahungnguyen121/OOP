#include "Date.h"

int main()
{
	Date d;
	Date d1(29, 2, 2020);
	Date d2;
	Date d3;

	cout << d.toString() << endl;

	d2 = d.parse("31/8/2001");

	cout << d2.toString() << endl;

	d.tryParse("21/7/2001", d3);

	cout << d3.toString() << endl;

	cout << d.isValid("29/02/2020") << endl;

	cout << d.isLeapYear(2020) << endl;

	cout << d.isLeapYear(2019) << endl;

	return 0;
}