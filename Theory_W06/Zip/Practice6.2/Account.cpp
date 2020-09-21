#include "Account.h"

Account::Account()
{
    this->m_balance = 0.0;
}

float Account::getBalance()
{
    return this->m_balance;
}

void Account::deposit(float money)
{
    this->m_balance += money;
}

void Account::withdraw(float money)
{
    if (money <= this->m_balance)
        this->m_balance -= money;
}

SavingAccount::SavingAccount(int period, float rate)
{
    this->m_period = period;
    this->m_rate = rate;
    this->m_lastActionDuration = 0;
}

float SavingAccount::calcInterest()
{
    int temp = this->m_lastActionDuration / this->m_period;
    if (temp == 0)
        return 0.0;
    return Account::getBalance() * (pow((1 + this->m_rate * this->m_period / 12), temp) - 1);
}

void SavingAccount::deposit(float money)
{
    Account::deposit(this->calcInterest() + money);
    this->m_lastActionDuration = 0;
}

void SavingAccount::withdraw(float money)
{
    Account::deposit(this->calcInterest());
    Account::withdraw(money);
    this->m_lastActionDuration = 0;
}

void SavingAccount::increase()
{
    this->m_lastActionDuration++;
}
