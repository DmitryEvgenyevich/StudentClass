#pragma once
#include <iostream>

class Array
{
private:
	int _size;
	int* _arr;

public:
	Array(int size = 0);
	Array(const Array& temp);
	~Array();
	void setArr(const Array* temp);
	void addToBakc(int num);
	void printAllArr() const;
	void delAllArr();

};
