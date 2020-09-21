#include "array.h"

int main()
{
	int temp[10] = { 3, 5, 4, 6, 2, 4, 5, 6, 5, 4 };

	double temp2[10] = { 3.2, 5.4, 4, 6.5, 2, 4.1, 5, 6.4, 5.5, 4 };

	Array<int> a1;
	Array<float> a2(10);
	Array<int> a3(temp, 10);
	Array<double> a4(temp2, 10);
	Array<int> a5;
	Array<int> a6;
	
	cin >> a6;

	a5 = a3;

	cout << a5[5] << " " << a6[3] << " " << a4[1] << endl;

	return 0;
}