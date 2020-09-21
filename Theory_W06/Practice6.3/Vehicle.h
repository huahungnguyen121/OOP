#ifndef _VEHICLE_H_
#define _VEHICLE_H_

#include <iostream>

using namespace std;

class MotorBike
{
protected:
	float m_fuel;
	float m_weightOfGoods;
	int m_fuelConsumption;
	float m_additionConsumption;
	float m_additionWeight;
	float m_runLength;
public:
	MotorBike();
	void addWeightOfGoods(float weight);
	void removeWeightOfGoods(float weight);
	void addFuel(float fuel);
	void run(float length);
	float getFuel();
};

class Truck : public MotorBike
{
public:
	Truck();
};

#endif