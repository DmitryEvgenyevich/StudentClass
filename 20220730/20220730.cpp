#include <iostream>
#include <vector>
#include "Student.h"

int main()
{
    Student A{ "Artur", 17, 1, 25 };
    Student B{ "Vika", 17, 0, 5 };
    Student C{ "Vova", 18, 1, 2 };
    
    A.addGrade(5);
    A.addGrade(5);
    A.addGrade(2);

    std::cout << "\n" << A._arrGrades.getSize();


    B.addGrade(4);
    B.addGrade(5);
    B.addGrade(3);

    C.addGrade(2);
    C.addGrade(5);
    C.addGrade(2);

    std::vector<Student> student{ A, B, C };

    

    for (int i{}; i < student.size(); ++i)
        student[i].printInfAboutStudent();
}
