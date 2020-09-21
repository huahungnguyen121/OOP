#include "fraction.h"

int main()
{
	Fraction p1(3, 4);
	Fraction p2(5, 8);
	Fraction p3;
	Fraction p4;

	cin >> p3;
	cout << "p1 = " << p1;
	cout << "p2 = " << p2;
	cout << "p3 = " << p3;

	Fraction p = p1 + p2;
	cout << "Sum p1 and p2: " << p;
	p = p1 * p2;
	cout << "Mul p1 and p2: " << p;

	if (p1 > p2)
		cout << "True\n";
	else cout << "False\n";

	if (p1 < p3)
		cout << "True\n";
	else cout << "False\n";

	if (p1 <= p3)
		cout << "True\n";
	else cout << "False\n";

	if (p1 >= p3)
		cout << "True\n";
	else cout << "False\n";

	if (p1 == p3)
		cout << "True\n";
	else cout << "False\n";

	++p1;
	cout << p1;

	--p1;
	cout << p1;

	cout << p1++;

	cout << p1--;

	p1 += p2;

	cout << p1;

	p1 *= p2;
	cout << p1;

	p4 = p1;
	cout << p4;

	return 0;
}