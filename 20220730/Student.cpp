#include "Student.h"

int Student::_count{ 0 };

Student::Student(std::string name, int age, bool isMan, int numGroup) :
	_id{ _count++ } ,
	_name{ name },
	_age{ age },
	_isMan{ isMan },
	_numGroup{ numGroup }
{}

Student::~Student()
{}

void Student::addGrade(int grade)
{
	this->_arrGrades.pushBack(grade);
}

void Student::printAllGrades()
{
	this->_arrGrades.printAllArr();
}

void Student::printInfAboutStudent()
{
	std::string temp = this->_isMan ? "MAN" : "WOMEN";

	std::cout << "Id:\t" << this->_id << '\n';
	std::cout << "Name:\t" << this->_name << '\n';
	std::cout << "Age:\t" << this->_age << '\n';
	std::cout << "Gender:\t" << temp << '\n';
	std::cout << "Group:\t" << this->_numGroup << '\n';
	this->printAllGrades();
}

void Student::delAllGrades()
{
	this->_arrGrades.delAllArr();
}

std::string Student::getName()
{
	return this->_name;
}

void Student::setName(std::string name)
{
	this->_name = name;
}

void Student::setAge(int age)
{
	this->_age = age;
}

int Student::getAge()
{
	return this->_age;
}
