#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Course
{
public:
    Course();
    Course(string name,int Minstd,int crdthours);
    Course(Course&obj);
    string getname();
    string getcode();
    int getminstdlvl();
    int getcrdthours();
    void setname(string name);
    void setcode(string code);
    void setminstdlvl(int min);
    void setcrdthours(int crdt);
    friend ostream &operator<<(ostream &out,Course &obj);

protected:
    string Name;
    string Code;
    int MinStudentLevel;
    int CreditHours;
private:
};

#endif // COURSE_H
