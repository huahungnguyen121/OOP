#include "Cinema.h"

int main()
{
	StandardCinema cine(39, 60, (float)10);
	VIPCinema vip(40, 60, (float)15, true, 0.2);

	cout << "Standard Cinema\n";
	cout << cine.checkEmptySeat(17, 30) << endl; //false = 0 is empty
	cout << cine.tellPrice(17, 30) << endl;
	cout << cine.bookASeat(17, 30) << endl; //true = 1 is successfully booked else = 0
	cout << cine.bookASeat(17, 30) << endl;
	cout << cine.bookASeat(18, 30) << endl;
	cout << cine.calcTotalPrice() << endl;

	cout << "VIP Cinema\n";
	cout << vip.checkEmptySeat(17, 30) << endl; //false = 0 is empty
	cout << vip.tellPrice(17, 30) << endl;
	cout << vip.bookASeat(17, 30) << endl; //true = 1 is successfully booked else = 0
	cout << vip.bookASeat(17, 30) << endl;
	cout << vip.bookASeat(20, 30) << endl;
	cout << vip.calcTotalPrice() << endl;

	return 0;
}