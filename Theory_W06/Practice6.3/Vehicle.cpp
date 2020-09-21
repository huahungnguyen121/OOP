#include "Vehicle.h"

MotorBike::MotorBike()
{
	this->m_fuel = 0.0;
	this->m_additionConsumption = 0.1;
	this->m_additionWeight = 10;
	this->m_fuelConsumption = 2;
	this->m_weightOfGoods = 0.0;
	this->m_runLength = 0.0;
}

void MotorBike::addWeightOfGoods(float weight)
{
	this->m_weightOfGoods += weight;
}

void MotorBike::removeWeightOfGoods(float weight)
{
	if (this->m_weightOfGoods >= weight)
		this->m_weightOfGoods -= weight;
}

void MotorBike::addFuel(float fuel)
{
	this->m_fuel += fuel;
}

void MotorBike::run(float length)
{
	this->m_fuel = this->m_fuel - (this->m_fuelConsumption * length / 100 + this->m_weightOfGoods * this->m_additionConsumption / this->m_additionWeight);
	if (this->m_fuel < 0)
		this->m_fuel = 0.0;
}

float MotorBike::getFuel()
{
	return this->m_fuel;
}

Truck::Truck()
{
	this->m_fuel = 0.0;
	this->m_additionConsumption = 1;
	this->m_additionWeight = 1000;
	this->m_fuelConsumption = 20;
	this->m_weightOfGoods = 0.0;
	this->m_runLength = 0.0;
}