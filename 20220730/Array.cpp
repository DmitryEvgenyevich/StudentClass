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

int Array::getSize() const
{
	return this->_size;
}

void Array::pushBack(int value)
{
	const Array temp{ *this };
	++this->_size;
	this->_arr = new int[_size];
	this->setArr(&temp);
	this->_arr[_size - 1] = value;
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

void Array::setValueByIndex(int index, int value)
{
	if (index < this->_size)
		std::cout << "Array out of bounds\n";

	this->_arr[index] = value;
}

int Array::getValueByIndex(int index) const
{
	return this->_arr[index];
}

int Array::searchValue(int value) const
{
	for (int i{}; i < this->_size; ++i)
		if (this->_arr[i] == value)
			return this->_arr[i];
}
