#include "store.h"

int main()
{
	Store store;

	store.generateRandomNumbers();
	cout << "10 so nguyen sinh ngau nhien la: " << endl;
	store.showCurrentNumbers();

	store.getNumbersFromKeyboard();
	cout << "Cac so nguyen ban vua nhap la: " << endl;
	store.showCurrentNumbers();

	return 0;
}