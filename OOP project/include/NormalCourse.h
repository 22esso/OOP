#ifndef NORMALCOURSE_H
#define NORMALCOURSE_H
#include <iostream>
#include <bits/stdc++.h>
#include "Course.h"
using namespace std;

class NormalCourse:public Course
{
    public:
        NormalCourse();
        NormalCourse(string name,int level,int crdthours);

};

#endif // NORMALCOURSE_H
