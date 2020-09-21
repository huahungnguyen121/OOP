#include "Salary.h"
Fakename rng;
Random rng1;

Daily::Daily()
{
    this->_name = rng.next();
    this->_numberOfDaysWork = rng1.next(32);
}

void Daily::checkIn()
{
    this->_numberOfDaysWork++;
}

float Daily::calcSalary()
{
    return this->_numberOfDaysWork * 200000;
}

string Daily::getEmployeeInfo()
{
    string result = "Daily Employee " + this->_name.getFakeName() + " workdays: " + to_string(this->_numberOfDaysWork) + ", his/her salary will be " + to_string((int)this->calcSalary());
    return result;
}

Manager::Manager()
{
    this->_name = rng.next();
    this->_experienceYears = rng1.next(31);
}

float Manager::calcSalary()
{
    return 3000000 * (pow(1.15, this->_experienceYears));
}

string Manager::getEmployeeInfo()
{
    string result = "Manager " + this->_name.getFakeName() + " has " + to_string(this->_experienceYears) + " year(s) experience, his/her salary will be " + to_string((int)this->calcSalary());
    return result;
}

Worker::Worker()
{
    this->_name = rng.next();
    this->_numberOfProducts = rng1.next(1001);
}

float Worker::calcSalary()
{
    if (this->_numberOfProducts > 20)
        return 60000 + ((this->_numberOfProducts - 20) * (3250));
    else
        return this->_numberOfProducts * 3000;
}

string Worker::getEmployeeInfo()
{
    string result = "Worker " + this->_name.getFakeName() + " made " + to_string(this->_numberOfProducts) + " product(s), his/her salary will be " + to_string((int)this->calcSalary());
    return result;
}

void EzLifeCompany::randomEmployee(int n)
{
    int temp = -1;
    for (int i = 0; i < n; i++)
    {
        temp = rng1.next(3);

        if (temp == 0)
        {
            this->_v.push_back(new Daily);
            continue;
        }

        if (temp == 1)
        {
            this->_v.push_back(new Manager);
            continue;
        }

        if (temp == 2)
        {
            this->_v.push_back(new Worker);
            continue;
        }
    }
}

void EzLifeCompany::printAllEmployee()
{
    cout << "All Employees:\n\n";
    for (int i = 0; i < this->_v.size(); i++)
        cout << this->_v[i]->getEmployeeInfo() << endl;
}

float EzLifeCompany::calcTotalSalary()
{
    float sum = 0;

    for (int i = 0; i < this->_v.size(); i++)
        sum += this->_v[i]->calcSalary();

    return sum;
}

void EzLifeCompany::saveFile()
{
    fstream f;

    f.open("EmployeeInfo.txt", ios::out);

    if (!f.is_open())
    {
        cout << "Error Create File.\n";
        return;
    }

    f << "Total Employees: " << this->_v.size() << endl;

    for (int i = 0; i < this->_v.size(); i++)
        f << this->_v[i]->getEmployeeInfo() << endl;

    f << "Total salary: " << (int)this->calcTotalSalary() << endl;

    f.close();

    cout << "Saved successfully.\n";
}

void EzLifeCompany::clearData()
{
    for (int i = 0; i < this->_v.size(); i++)
        delete this->_v[i];

    this->_v.clear();
}
