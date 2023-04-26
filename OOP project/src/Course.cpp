#include "Course.h"

Course::Course()
{
    Name="";
    Code="";
    MinStudentLevel=0;
    CreditHours=0;
}
Course::Course(string name,int minstd,int crdthours)
{
    Name=name;
    MinStudentLevel=minstd;
    CreditHours=crdthours;
}
Course::Course(Course&obj)
{
    this->Name=obj.Name;
    this->Code=obj.Code;
    this->MinStudentLevel=obj.MinStudentLevel;
    this->CreditHours=obj.CreditHours;
}
void Course::setname(string name)
{
    Name=name;
    return;
}
void Course::setcode(string code)
{
    Code=code;
}
void Course::setminstdlvl(int min)
{
    MinStudentLevel=min;
}
void Course::setcrdthours(int crdthours)
{
    CreditHours=crdthours;
}
string Course::getname()
{
    return Name;
}
string Course::getcode()
{
    return Code;
}
int Course::getminstdlvl()
{
    return MinStudentLevel;
}
int Course::getcrdthours()
{
    return CreditHours;
}
ostream &operator<<(ostream &out,Course &obj)
{
    out<<"course name: "<<obj.Name<<endl;
    out<<"course code: "<<obj.Code<<endl;
    out<<"course min level of students: "<<obj.MinStudentLevel<<endl;
    out<<"course credit hours :"<<obj.CreditHours<<endl;
    return out;
}


