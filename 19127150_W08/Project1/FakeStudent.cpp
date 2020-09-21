#include "FakeStudent.h"

Student::Student()
{
}

Student::Student(string ID, Fullname name, Date DoB, string address, string email, string phoneNum, float avg)
{
    this->_ID = ID;
    this->_fullname = name;
    this->_DoB = DoB;
    this->_address = address;
    this->_email = email;
    this->_phoneNum = phoneNum;
    this->_avg = avg;
}

Student& Student::operator=(const Student& s)
{
    this->_ID = s._ID;
    this->_avg = s._avg;
    this->_DoB = s._DoB;
    this->_email = s._email;
    this->_fullname = s._fullname;
    this->_phoneNum = s._phoneNum;

    return *this;
}

Student FakeStudent::next()
{
    string ID = "";
    
    for (int i = 0; i < 8; i++)
        ID += to_string(this->_rng.next(10));

    Fullname name = this->_rng1.next();

    Date DoB = this->_rng2.next(this->_rng.next(20) + 1);

    string address = this->_rng5.next().getFakeAddress();

    string temp = this->_rng3.next();

    int findPos = temp.find("@", 0);

    temp = temp.substr(findPos, temp.length());

    string temp2 = name.getFakeName();

    string email = "";

    Tokenizer tk;

    tk.split(temp2);

    for (int i = 0; i < tk.tokens.size(); i++)
        this->_rng3.convertToLower(tk.tokens[i]);

    for (int i = 0; i < tk.tokens.size(); i++)
    {
        if (i == tk.tokens.size() - 1)
            email += tk.tokens[i];
        else
            email += tk.tokens[i].substr(0, 1);
    }

    email += temp;

    string phoneNum = this->_rng4.next();

    uniform_real_distribution<float> distribution((float)0, (float)10);

    float avg = distribution(this->_generator);

    Student s(ID, name, DoB, address, email, phoneNum, avg);

    return s;
}

string Student::toString()
{
    string result = "";

    result = this->_ID + ", " + this->_fullname.getFakeName() + ", " + this->_DoB.toString() + ", " + this->_address + ", " + this->_email + ", " + this->_phoneNum + ", " + to_string(this->_avg);
    
    return result;
}

int Student::compareAvg(const Student& s)
{
    if (this->_avg > s._avg)
        return 1;
    if (this->_avg < s._avg)
        return -1;
    return 0;
}
