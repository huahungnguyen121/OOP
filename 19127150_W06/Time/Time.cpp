#include "Time.h"

Time::Time()
{
	time_t info = time(NULL);
	tm* now = localtime(&info);
	this->_absSec = now->tm_hour * 3600 + now->tm_min * 60 + now->tm_sec;
}

Time::Time(int hour, int min, int sec)
{
	if (hour < 0 || min < 0 || sec < 0)
		this->_absSec = 0;
	else
	{
		int temp = hour * 3600 + min * 60 + sec;
		if (temp > 86400)
			temp -= 86400;
		this->_absSec = temp;
	}
}

Time& Time::operator=(const Time& t)
{
	this->_absSec = t._absSec;
	return *this;
}

string Time::toString()
{
	string time = "";

	int temp = this->_absSec % 3600;
	if (this->_absSec / 3600 < 10)
		time += "0";
	time = time + to_string(this->_absSec / 3600) + ":";
	if (temp / 60 < 10)
		time += "0";
	time = time + to_string(temp / 60) + ":";
	temp = temp % 60;
	if (temp < 10)
		time += "0";
	time = time + to_string(temp);

	return time;
}

string Time::toString2()
{
	bool flag = false;
	string time = "";

	int temp = this->_absSec % 3600;
	if (this->_absSec / 3600 > 11)
	{
		if (this->_absSec / 3600 == 12)
			time += "12:";
		else
		{
			if (this->_absSec / 3600 - 12 < 10)
				time += "0";
			time = time + to_string(this->_absSec / 3600 - 12) + ":";
		}
		flag = true;
	}
	else
	{
		if (this->_absSec / 3600 < 10)
			time += "0";
		time = time + to_string(this->_absSec / 3600) + ":";
	}
	if (temp / 60 < 10)
		time += "0";
	time = time + to_string(temp / 60) + ":";
	temp = temp % 60;
	if (temp < 10)
		time += "0";
	time = time + to_string(temp);

	if (flag)
		time += " PM";
	else
		time += " AM";

	return time;
}

Time Time::parse(string time)
{
	Tokenizer tk;
	tk.split(time, ":");
	Time t(stoi(tk.tokens[0]), stoi(tk.tokens[1]), stoi(tk.tokens[2]));

	return t;
}

bool Time::tryParse(string time, Time& t)
{
	for (int i = 0; i < time.length(); i++)
	{
		if ((int)time[i] > 58 || (int)time[i] < 48)
		{
			Time temp(0, 0, 0);
			t = temp;
			return false;
		}
	}
	Tokenizer tk;
	tk.split(time, ":");

	int hour = stoi(tk.tokens[0]);
	int min = stoi(tk.tokens[1]);
	int sec = stoi(tk.tokens[2]);

	Time temp(hour, min, sec);
	t = temp;
	return true;
}

bool Time::isValid(string time)
{
	for (int i = 0; i < time.length(); i++)
	{
		if ((int)time[i] > 58 || (int)time[i] < 48)
		{
			return false;
		}
	}

	Tokenizer tk;
	tk.split(time, ":");

	int hour = stoi(tk.tokens[0]);
	int min = stoi(tk.tokens[1]);
	int sec = stoi(tk.tokens[2]);

	if (hour > 23 || min > 59 || sec > 59 || hour < 0 || min < 0 || sec < 0)
		return false;

	return true;
}
