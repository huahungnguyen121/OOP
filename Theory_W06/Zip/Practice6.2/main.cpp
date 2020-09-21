#include "Account.h"

int main()
{
	SavingAccount a(3, 0.065);

	a.deposit(3000000);

	cout << (int)a.getBalance() << endl;

	for (int i = 0; i < 6; i++)
		a.increase();

	a.withdraw(1500000);

	cout << (int)a.getBalance() << endl;
	
	return 0;
}