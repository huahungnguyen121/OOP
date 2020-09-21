#include "Header.h"

int Cheetah::tellSpeed()
{
    return 100;
}

string Cheetah::tellName()
{
    return "Cheetah";
}

int Antelope::tellSpeed()
{
    return 80;
}

string Antelope::tellName()
{
    return "Antelope";
}

int Lion::tellSpeed()
{
    return 70;
}

string Lion::tellName()
{
    return "Lion";
}

int Dog::tellSpeed()
{
    return 60;
}

string Dog::tellName()
{
    return "Dog";
}

int Human::tellSpeed()
{
    return 30;
}

string Human::tellName()
{
    return "Human";
}

//if we add the horse to the table
int Horse::tellSpeed()
{
    return 60;
}

string Horse::tellName()
{
    return "Horse";
}

void tellWin(Animal *a1, Animal *a2)
{
    if (a1->tellSpeed() > a2->tellSpeed())
    {
        cout << a1->tellName() << " win.\n";
        return;
    }

    if (a1->tellSpeed() < a2->tellSpeed())
    {
        cout << a2->tellName() << " win.\n";
        return;
    }

    cout << a1->tellName() << " and " << a2->tellName() << " tied.\n";
}