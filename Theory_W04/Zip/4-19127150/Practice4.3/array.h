#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <iostream>

using namespace std;

template <class T>
class Array
{
private:
	T* m_arr;
	int m_len;
public:
	//constructors & destructor
	Array()
	{
		this->m_len = 0;
		this->m_arr = new T[this->m_len];
	}
	Array(const int& len)
	{
		this->m_len = len;
		this->m_arr = new T[this->m_len];

		for (int i = 0; i < this->m_len; i++)
			this->m_arr[i] = 0;
	}
	Array(T* a, const int& len)
	{
		this->m_len = len;
		this->m_arr = new T[this->m_len];

		for (int i = 0; i < this->m_len; i++)
			this->m_arr[i] = a[i];
	}
	Array(const Array& a)
	{
		this->m_len = a.getLength();
		this->m_arr = new T[this->m_len];

		for (int i = 0; i < this->m_len; i++)
			this->m_arr[i] = a.getElement(i);
	}
	~Array()
	{
		delete[] this->m_arr;
	}
	int getLength() const
	{
		return this->m_len;
	}
	T getElement(int index) const
	{
		return this->m_arr[index];
	}
	//operators
	Array& operator=(const Array& a);
	T& operator[](int index);
	template <class T>
	friend istream& operator>>(istream& is, Array<T>& a);
	template <class T>
	friend ostream& operator<<(ostream& os, Array<T>& a);
};

#endif

template<class T>
Array<T>& Array<T>::operator=(const Array& a)
{
	delete[] this->m_arr;
	this->m_len = a.m_len;

	this->m_arr = new T[this->m_len];

	for (int i = 0; i < this->m_len; i++)
	{
		this->m_arr[i] = a.m_arr[i];
	}
	return *this;
}

template<class T>
T& Array<T>::operator[](int index)
{
	return this->m_arr[index];
}

template <class T>
istream& operator>>(istream& is, Array<T>& a)
{
	cout << "Enter number of elements: ";
	is >> a.m_len;

	delete[] a.m_arr;

	a.m_arr = new T[a.m_len];

	for (int i = 0; i < a.m_len; i++)
	{
		cout << "Element #" << i + 1 << ": ";
		is >> a.m_arr[i];
	}
	return is;
}

template <class T>
ostream& operator<<(ostream& os, Array<T>& a)
{
	os << "Array length: " << a.m_len << endl;
	for (int i = 0; i < a.m_len; i++)
	{
		os << "Element #" << i + 1 << ": ";
		os << a.m_arr[i] << endl;
	}
	return os;
}