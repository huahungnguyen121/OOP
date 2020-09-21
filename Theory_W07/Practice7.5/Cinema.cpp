#include "Cinema.h"

Cinema::Cinema(int rows, int cols, float price)
{
	int condition = 2 * (2 * price - 1) + 1;
	
	if (rows <= condition)
	{
		//allocate memory
		this->m_seats = new bool* [rows];

		for (int i = 0; i < rows; i++)
			this->m_seats[i] = new bool[cols];

		//set empty seat
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++)
				this->m_seats[i][j] = false;

		this->m_rows = rows;
		this->m_cols = cols;

		this->m_centralPrice = price;
	}
	else
	{
		this->m_seats = new bool* [0];

		this->m_rows = 0;
		this->m_cols = 0;

		this->m_centralPrice = 0;
	}
}

bool Cinema::checkEmptySeat(int row, int col)
{
	return this->m_seats[row - 1][col - 1];
}

float Cinema::tellPrice(int row, int col)
{
	int midRow = this->m_rows / 2;

	float price = 0.0;

	price = this->m_centralPrice - fabs(row - 1 - midRow) * 0.5;

	return price;
}

bool Cinema::bookASeat(int row, int col)
{
	if (!this->checkEmptySeat(row, col))
	{
		this->m_seats[row - 1][col - 1] = true;
		return true;
	}
	else
		return false;
}

float Cinema::calcTotalPrice()
{
	float sum = 0.0;

	for (int i = 0; i < this->m_rows; i++)
		for (int j = 0; j < this->m_cols; j++)
		{
			if (this->checkEmptySeat(i + 1, j + 1))
				sum += this->tellPrice(i + 1, j + 1);
		}

	return sum;
}

Cinema::~Cinema()
{
	for (int i = 0; i < this->m_rows; i++)
		delete[] this->m_seats[i];

	delete[] this->m_seats;
}

VIPCinema::VIPCinema(int rows, int cols, float price, bool flag, float discount) : Cinema(rows, cols, price)
{
	this->m_flag = flag;
	this->m_discount = discount;
}

float VIPCinema::tellPrice(int row, int col)
{
	if (this->m_flag)
		return Cinema::tellPrice(row, col) * (1 - this->m_discount);
	else
		return Cinema::tellPrice(row, col);
}

float VIPCinema::calcTotalPrice()
{
	if (this->m_flag)
		return Cinema::calcTotalPrice() * (1 - this->m_discount);
	else
		return Cinema::calcTotalPrice();
}
