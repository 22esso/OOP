#ifndef SUMMERCOURSE_H
#define SUMMERCOURSE_H
#include <iostream>
#include <bits/stdc++.h>
#include "Course.h"
using namespace std;

class SummerCourse: public Course
{
    public:
        SummerCourse();
        SummerCourse(string name,int level,int crdthours);


};

#endif // SUMMERCOURSE_H
