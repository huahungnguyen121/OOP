#include "Fakename.h"

Fakename::Fakename()
{
	//Firstname data
	this->_firstName.push_back("Nguyen");
	this->_firstName.push_back("Tran");
	this->_firstName.push_back("Le");
	this->_firstName.push_back("Pham");
	this->_firstName.push_back("Hoang");
	this->_firstName.push_back("Huynh");
	this->_firstName.push_back("Phan");
	this->_firstName.push_back("Vu");
	this->_firstName.push_back("Vo");
	this->_firstName.push_back("Dang");

	//Middlename data
	this->_middleName.push_back("Hua");
	this->_middleName.push_back("Minh");
	this->_middleName.push_back("Kieu");
	this->_middleName.push_back("Dinh");
	this->_middleName.push_back("Van");
	this->_middleName.push_back("Thi");
	this->_middleName.push_back("Thanh");
	this->_middleName.push_back("Duy");
	this->_middleName.push_back("Kim");
	this->_middleName.push_back("Bich");

	//Lastname data
	this->_lastName.push_back("Hung");
	this->_lastName.push_back("Huy");
	this->_lastName.push_back("Hieu");
	this->_lastName.push_back("Khoi");
	this->_lastName.push_back("Thai");
	this->_lastName.push_back("Thao");
	this->_lastName.push_back("Oanh");
	this->_lastName.push_back("Diem");
	this->_lastName.push_back("Tri");
	this->_lastName.push_back("Dung");
}

Fullname Fakename::next()
{
	Fullname temp(this->_firstName[this->_rng.next(this->_firstName.size())], this->_middleName[this->_rng.next(this->_middleName.size())], this->_lastName[this->_rng.next(this->_lastName.size())]);
	return temp;
}

Fullname::Fullname()
{
	this->_firstName = "";
	this->_middleName = "";
	this->_lastName = "";
}

Fullname::Fullname(string first, string middle, string last)
{
	this->_firstName = first;
	this->_middleName = middle;
	this->_lastName = last;
}

Fullname& Fullname::operator=(const Fullname& name)
{
	this->_firstName = name._firstName;
	this->_lastName = name._lastName;
	this->_middleName = name._middleName;
	return *this;
}

string Fullname::getFakeName()
{
	string fullName = this->_firstName + " " + this->_middleName + " " + this->_lastName;

	return fullName;
}
