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
	int getSize() const;
	void pushBack(int value);
	void printAllArr() const;
	void delAllArr();
	void setValueByIndex(int index, int value);
	int getValueByIndex(int index) const;
	int searchValue(int index) const;

};
