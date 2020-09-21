#include "Header.h"

Client::Client()
{
	this->_ID = "";
	this->_fullname = "";
	this->_balance = 0;
}

Client::Client(const string& ID, const string& fullname, int balance)
{
	this->_ID = ID;
	this->_fullname = fullname;
	this->_balance = balance;
}

string Client::ID()
{
	return this->_ID;
}

string Client::fullname()
{
	return this->_fullname;
}

int Client::balance()
{
	return this->_balance;
}

void Client::setID(string value)
{
	this->_ID = value;
}

void Client::setFullname(string value)
{
	this->_fullname = value;
}

void Client::setBalance(int value)
{
	this->_balance = value;
}

string Client::toString()
{
	stringstream writer;
	writer << this->_ID << this->_separator << this->_fullname << this->_separator << this->_balance;

	return writer.str();
}

Client Client::parse(string line)
{
	Client result;

	auto tokens = Tokenizer::split(line, result._separator);
	result._ID = tokens[0];
	result._fullname = tokens[1];
	result._balance = stoi(tokens[2]);

	return result;
}
