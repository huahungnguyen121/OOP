#include "Dice.h"

int main()
{
	Dice dice;

	int roll = dice.roll();
	cout << "First roll: " << roll << endl;

	int sum = roll;
	int n = 1;
	int in;

	while (true)
	{
		cout << "Enter 0 to stop roll: ";
		cin >> in;

		if (in == 0)
			break;

		int roll = dice.roll();
		cout << roll << endl;
		sum += roll;
		n++;
	}

	cout << "Average number from all rolls = " << (float)sum / n << endl;

	cout << "All the counts for all the values: \n";
	for (int i = 0; i < 6; i++)
		cout << i + 1 << ":  " << dice.getRollCounts(i + 1) << " times" << endl;
	return 0;
}