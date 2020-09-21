#ifndef _CINEMA_H_
#define _CINEMA_H_

#include <iostream>

using namespace std;

class Cinema
{
private:
	bool** m_seats;
	int m_rows;
	int m_cols;
	float m_centralPrice;
public:
	Cinema(int rows, int cols, float price);
	//false = empty seat
	bool checkEmptySeat(int row, int col);
	float tellPrice(int row, int col);
	//true: successfully booked
	bool bookASeat(int row , int col);
	float calcTotalPrice();
	~Cinema();
};

class StandardCinema : public Cinema
{
public:
	StandardCinema(int rows, int cols, float price) : Cinema(rows, cols, price) {};
};

class VIPCinema : public Cinema
{
private:
	bool m_flag;
	float m_discount;
public:
	VIPCinema(int rows, int cols, float price, bool flag, float discount);
	float tellPrice(int row, int col);
	float calcTotalPrice();
};

#endif