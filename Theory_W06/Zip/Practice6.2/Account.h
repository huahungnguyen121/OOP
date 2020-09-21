#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>

using namespace std;

class Account
{
private:
	float m_balance;
public:
	Account();
	float getBalance();
	void deposit(float money);
	void withdraw(float money);
};

class SavingAccount :public Account
{
private:
	int m_period;
	float m_rate;
	int m_lastActionDuration;
public:
	SavingAccount(int period, float rate);
	float calcInterest();
	void deposit(float money);
	void withdraw(float money);
	void increase();
};

#endif