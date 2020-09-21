#include "Time.h"

int main()
{
	Time t;
	Time t1(12, 55, 45);
	Time t2(10, 55, 40);
	Time t3;
	Time t4;

	cout << t.toString() << endl;
	cout << t.toString2() << endl;

	cout << t1.toString() << endl;
	cout << t1.toString2() << endl;

	cout << t2.toString() << endl;
	cout << t2.toString2() << endl;

	cout << t.tryParse("24:50:55", t3) << endl;

	cout << t3.toString() << endl;
	cout << t3.toString2() << endl;

	cout << t.isValid("24:50:55") << endl;

	t4 = t.parse("23:50:55");

	cout << t4.toString() << endl;
	cout << t4.toString2() << endl;

	return 0;
}