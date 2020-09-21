#include "monomial.h"

int main()
{
	Monomial m1;
	Monomial m2;
	Monomial m3;
	Monomial m4;
	Monomial m5;
	Monomial m6;

	cin >> m1;

	cin >> m2;

	cin >> m3;

	m4 = m3;

	cout << m1 << m2 << m3 << m4 << endl;

	m5 = m4 + m1;

	m6 = m2;

	cout << m5 << endl;

	cout << m6 << endl;

	m5 += m6;
	m6 *= m5;

	cout << m5 << endl;

	cout << m6 << endl;

	m5++;
	m6++;

	cout << m5 << endl;

	cout << m6 << endl;

	m5--;
	m6--;

	cout << m5 << endl;

	cout << m6 << endl;

	!m5;
	!m6;

	cout << m5 << endl;

	cout << m6 << endl;

	if (m1 > m2)
		cout << "1\n";
	else cout << "0\n";

	if (m1 < m3)
		cout << "1\n";
	else cout << "0\n";

	if (m1 == m3)
		cout << "1\n";
	else cout << "0\n";

	if (m1 >= m3)
		cout << "1\n";
	else cout << "0\n";

	if (m1 <= m3)
		cout << "1\n";
	else cout << "0\n";

	if (m1 != m3)
		cout << "1\n";
	else cout << "0\n";

	return 0;
}