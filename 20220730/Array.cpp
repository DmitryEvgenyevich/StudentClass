#include "Array.h"

Array::Array(int size) :
	_size{ size }
{}

Array::Array(const Array& temp) :
	_size{ temp._size },
	_arr{ temp._arr }
{}

Array::~Array()
{
	if (this->_arr != nullptr)
		delete[] this->_arr;
}

void Array::setArr(const Array* temp)
{
	for (int i{}; i < temp->_size; ++i)
		this->_arr[i] = temp->_arr[i];
}

void Array::addToBakc(int num)
{
	const Array temp{ *this };
	++this->_size;
	this->_arr = new int[_size];
	this->setArr(&temp);
	this->_arr[_size - 1] = num;
}

void Array::printAllArr() const
{
	for (int i{}; i < this->_size; ++i)
		std::cout << this->_arr[i] << '\t';
	std::cout << "\n\n";
}

void Array::delAllArr()
{
	this->~Array();
	this->_arr = nullptr;
	this->_size = 0;
}
