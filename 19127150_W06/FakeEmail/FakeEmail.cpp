#include "FakeEmail.h"

FakeEmail::FakeEmail()
{
	//initialize domain data
	this->_domains.push_back("@gmail.com");
	this->_domains.push_back("@apple.com");
	this->_domains.push_back("@microsoft.com");
	this->_domains.push_back("@amazon.com");
	this->_domains.push_back("@yahoo.com");
	this->_domains.push_back("@outlook.com");
	this->_domains.push_back("@spotify.com");
	this->_domains.push_back("@epicgames.com");
	this->_domains.push_back("@steampowered.com");
	this->_domains.push_back("@reddit.com");
}

void FakeEmail::convertToLower(string& s)
{
	int len = s.length();
	for (int i = 0; i < len; i++)
		s[i] = (char)tolower(s[i]);
}

string FakeEmail::next()
{
	//clear token
	this->_tk.tokens.clear();

	string email = "";

	string name = this->_fullname.next().getFakeName();

	this->_tk.split(name);

	for (int i = 0; i < this->_tk.tokens.size(); i++)
		convertToLower(this->_tk.tokens[i]);

	for (int i = 0; i < this->_tk.tokens.size(); i++)
	{
		if (i == this->_tk.tokens.size() - 1)
			email += this->_tk.tokens[i];
		else
			email += this->_tk.tokens[i].substr(0, 1);
	}

	email += this->_domains[this->_rng.next(this->_domains.size())];

	return email;
}
