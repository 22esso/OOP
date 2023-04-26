#include "SummerCourse.h"

SummerCourse::SummerCourse()
{

    Name="";
    MinStudentLevel=0;
    CreditHours=0;
    Code="";

}

SummerCourse::SummerCourse(string name,int level,int crdthours){

     Name=name;
    MinStudentLevel=level;
    CreditHours=crdthours;
    ///to string is a function that turns the integer value to a string to be able to sum it up with other strings
    Code=name+"_S"+to_string(level);


}

