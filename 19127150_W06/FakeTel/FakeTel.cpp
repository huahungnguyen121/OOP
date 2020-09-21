#include "FakeTel.h"

FakeTel::FakeTel()
{
    //initialize phone operator data
    this->_phoneOperator.push_back("086");
    this->_phoneOperator.push_back("096");
    this->_phoneOperator.push_back("097");
    this->_phoneOperator.push_back("089");
    this->_phoneOperator.push_back("090");
    this->_phoneOperator.push_back("093");
    this->_phoneOperator.push_back("081");
    this->_phoneOperator.push_back("082");
    this->_phoneOperator.push_back("085");

    this->_phoneNumber = "";
}

string FakeTel::next()
{
    string phone = this->_phoneOperator[this->_rng.next(this->_phoneOperator.size())];
    for (int i = 0; i < 7; i++)
        phone += to_string(this->_rng.next(10));
    return phone;
}
