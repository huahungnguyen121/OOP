#include "Date.h"

Date::Date()
{
	time_t info = time(NULL);
	tm* now = localtime(&info);
	this->_day = now->tm_mday;
	this->_month = now->tm_mon + 1;
	this->_year = now->tm_year + 1900;
}

Date::Date(int day, int month, int year)
{
	//check day is valid
	if (month < 8)
	{
		if (month % 2 != 0)
		{
			if (day < 32 && day > 0)
			{
				this->_day = day;
				this->_month = month;
				this->_year = year;
				return;
			}
		}
		else
		{
			if (month == 2)
				if (this->isLeapYear(year))
				{
					if (day < 30 && day > 0)
					{
						this->_day = day;
						this->_month = month;
						this->_year = year;
						return;
					}
				}
				else
				{
					if (day < 29 && day > 0)
					{
						this->_day = day;
						this->_month = month;
						this->_year = year;
						return;
					}
				}
			else
			{
				if (day < 31 && day > 0)
				{
					this->_day = day;
					this->_month = month;
					this->_year = year;
					return;
				}
			}
		}
	}
	else
	{
		if (month < 13 && month > 0)
		{
			if (month % 2 != 0)
			{
				if (day < 31 && day > 0)
				{
					this->_day = day;
					this->_month = month;
					this->_year = year;
					return;
				}
			}
			else
			{
				if (day < 32 && day > 0)
				{
					this->_day = day;
					this->_month = month;
					this->_year = year;
					return;
				}
			}
		}
	}
	//Day is invalid
	this->_day = 0;
	this->_month = 0;
	this->_year = 0;
}

Date& Date::operator=(const Date& d)
{
	this->_day = d._day;
	this->_month = d._month;
	this->_year = d._year;
	return *this;
}

string Date::toString()
{
	string date = "";
	
	if (this->_day < 10)
		date = date + "0" + to_string(this->_day) + "/";
	else date = date + to_string(this->_day) + "/";

	if (this->_month < 10)
		date = date + "0" + to_string(this->_month) + "/";
	else date = date + to_string(this->_month) + "/";

	date += to_string(this->_year);
	
	return date;
}

Date Date::parse(string date)
{
	Tokenizer tk;
	tk.split(date, "/");
	Date d(stoi(tk.tokens[0]), stoi(tk.tokens[1]), stoi(tk.tokens[2]));

	return d;
}

bool Date::tryParse(string date, Date& d)
{
	for (int i = 0; i < date.length(); i++)
	{
		if ((int)date[i] > 57 || (int)date[i] < 47)
		{
			Date temp(0, 0, 0);
			d = temp;
			return false;
		}
	}
	Tokenizer tk;
	tk.split(date, "/");

	int day = stoi(tk.tokens[0]);
	int month = stoi(tk.tokens[1]);
	int year = stoi(tk.tokens[2]);
	
	Date temp(day, month, year);

	d = temp;

	if (temp._day == 0)
		return false;
	else
		return true;
}

bool Date::isValid(string date)
{
	for (int i = 0; i < date.length(); i++)
	{
		if ((int)date[i] > 57 || (int)date[i] < 47)
			return false;
	}
	Tokenizer tk;
	tk.split(date, "/");

	int day = stoi(tk.tokens[0]);
	int month = stoi(tk.tokens[1]);
	int year = stoi(tk.tokens[2]);

	Date temp(day, month, year);

	if (temp._day == 0)
		return false;
	else
		return true;
}

bool Date::isLeapYear(int year)
{
	if (year % 400 == 0)
		return true;

	if (year % 4 == 0 && year % 100 != 0)
		return true;

	return false;
}
