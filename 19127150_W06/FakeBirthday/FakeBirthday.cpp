#include "FakeBirthday.h"

Date FakeBirthday::next(int age)
{
	if (age == -1)
	{
		int day = 0;
		int month = 0;
		int year = 0;

		Date temp;

		string now = temp.toString();

		Tokenizer tk;
		tk.split(now, "/");

		year = stoi(tk.tokens[2]) - 116 + this->_rng.next(117);

		month = this->_rng.next(12) + 1;

		if (month < 8)
		{
			if (month % 2 != 0)
				day = this->_rng.next(31) + 1;
			else
			{
				if (month == 2)
					if (temp.isLeapYear(year))
						day = this->_rng.next(29) + 1;
					else
						day = this->_rng.next(28) + 1;
				else
					day = this->_rng.next(30) + 1;
			}
		}
		else
		{
			if (month % 2 != 0)
				day = this->_rng.next(30) + 1;
			else
				day = this->_rng.next(31) + 1;
		}

		Date out(day, month, year);

		return out;
	}

	if (age < 0 || age > 117)
    {
        Date out(0, 0, 0);
        return out;
    }

    int day = 0;
    int month = 0;
    int year = 0;

    Date temp;

    string now = temp.toString();

    Tokenizer tk;
    tk.split(now, "/");

    year = stoi(tk.tokens[2]) - age;

    month = this->_rng.next(12) + 1;

	if (month < 8)
	{
		if (month % 2 != 0)
			day = this->_rng.next(31) + 1;
		else
		{
			if (month == 2)
				if (temp.isLeapYear(year))
					day = this->_rng.next(29) + 1;
				else
					day = this->_rng.next(28) + 1;
			else
				day = this->_rng.next(30) + 1;
		}
	}
	else
	{
		if (month % 2 != 0)
			day = this->_rng.next(30) + 1;
		else
			day = this->_rng.next(31) + 1;
	}

	Date out(day, month, year);

	return out;
}
