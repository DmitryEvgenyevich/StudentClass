#pragma once
#include <iostream>
#include <string>
#include "Array.h"

class Student
{
private:
	static int _count;
	int _id;
	std::string _name;
	int _age;
	bool _isMan;
	int _numGroup;


public:
	Array _arrGrades;
	Student(std::string name, int age, bool isMan, int numGroup);
	~Student();
	void addGrade(int grade);
	void printAllGrades();
	void printInfAboutStudent();
	void delAllGrades();
	std::string getName();
	void setName(std::string name);
	int getAge();
	void setAge(int age);

};
