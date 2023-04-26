#ifndef STUDENT_H
#define STUDENT_H
#include "Course.h"
#include "NormalCourse.h"
#include "SummerCourse.h"
#include <bits/stdc++.h>
#include "Rational.h"
using namespace std;


class Student
{
    public:
        Student();
        Student(string Name,string ID,int Level);
        Rational calculateGPA();
        friend ostream & operator << (ostream & out, Student & x);
        friend istream & operator >> (istream & in, Student & x);
        bool RegisterCourse(Course* course);
        void printRegisteredCourses();
        virtual float CalculateExpenses()=0;  // a pure virtual function
        double getCourseGPA(Rational); //returns the GPA based on the below table
        ~Student();
        Rational Grades[6];
        string Name;
        string ID;
        Course*courselist[6];
        int NoOfCourses;
        int Level;

};

#endif // STUDENT_H
