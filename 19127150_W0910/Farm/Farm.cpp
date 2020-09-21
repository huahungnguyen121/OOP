#include "Farm.h"
Random rng;

Cow::Cow()
{
    this->_dailyMilk = 6 + rng.next(5);
}

int Cow::getMilk(int day)
{
    if (day < 0)
        return 0;

    return day * this->_dailyMilk;
}

Sheep::Sheep()
{
    this->_dailyMilk = 1 + rng.next(2);
}

int Sheep::getMilk(int day)
{
    if (day < 0)
        return 0;

    return day * this->_dailyMilk;
}

Goat::Goat()
{
    this->_dailyMilk = 3 + rng.next(3);
}

int Goat::getMilk(int day)
{
    if (day < 0)
        return 0;

    return day * this->_dailyMilk;
}

Farm::Farm()
{
    int n = rng.next(11) + 10;

    this->_day = rng.next(11) + 10;

    int temp = -1;
    for (int i = 0; i < n; i++)
    {
        temp = rng.next(3);
        if (temp == 0)
        {
            this->_v.push_back(new Cow);
            continue;
        }

        if (temp == 1)
        {
            this->_v.push_back(new Sheep);
            continue;
        }

        if (temp == 2)
        {
            this->_v.push_back(new Goat);
            continue;
        }
    }
}

int Farm::estimateTotalMilk()
{
    int sum = 0;

    for (int i = 0; i < this->_v.size(); i++)
        sum += this->_v[i]->getMilk(this->_day);

    return sum;
}

void Farm::clearMem()
{
    for (int i = 0; i < this->_v.size(); i++)
        delete this->_v[i];

    this->_v.clear();
}