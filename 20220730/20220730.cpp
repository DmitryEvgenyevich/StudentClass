#include <iostream>
#include "Student.h"

int main()
{
    Student A{ "Artur", 17, 1, 25 };
    A.addGrade(5);
    A.addGrade(5);
    A.addGrade(2);
    A.printAllGrades();
    A.delAllGrades();
    A.addGrade(2);
    A.addGrade(5);
    A.addGrade(2);
    A.printAllGrades();
    A.printInfAboutStudent();
}