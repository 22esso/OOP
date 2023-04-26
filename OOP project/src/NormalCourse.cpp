#include "NormalCourse.h"

NormalCourse :: NormalCourse()
{
    Name="";
    MinStudentLevel=0;
    CreditHours=0;
    Code="";
}


NormalCourse :: NormalCourse(string name,int level,int crdthours)
{
    Name=name;
    MinStudentLevel=level;
    CreditHours=crdthours;
    ///to string is a function that turns the integer value to a string to be able to sum it up with other strings
    Code=name+"_N"+to_string(level);
}




