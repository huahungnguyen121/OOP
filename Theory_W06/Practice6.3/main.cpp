#include "Vehicle.h"

int main()
{
	MotorBike m1;

	m1.addFuel(3);

	m1.addWeightOfGoods(100);

	m1.removeWeightOfGoods(50);

	cout << m1.getFuel() << endl;

	m1.run(2);

	cout << m1.getFuel() << endl;

	Truck m2;

	m2.addFuel(20);

	m2.addWeightOfGoods(1000);

	m2.removeWeightOfGoods(500);

	cout << m2.getFuel() << endl;

	m2.run(10);

	cout << m2.getFuel() << endl;

	return 0;
}