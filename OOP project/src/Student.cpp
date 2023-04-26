#include "Student.h"

Student::Student()
{
    this->Name="";
    this->ID="";
    Level=0;
    for(int i=0;i<6;i++){
        course[i]=nullptr;
    }
    NoOfCourses=0;

}

Student:: Student(string Name,string ID,int Level)
{
    this->Name=Name;
    this->ID=ID;
    this->Level=Level;

    for(int i=0;i<6;i++){
        courses[i]=nullptr;
    }
    NoOfCourses=0;


}

Rational Student:: calculateGPA(){

    Rational GPA();
    return GPA;
}

ostream & operator << (ostream & out,  Student & x){

/*out << "Name : " <<  x.Name << " ID : " << x.ID <<" Number of courses : "<<x.arrSize<<endl;

        for(int i=0;i<x.arrSize;i++){
        out<<"the Credit hours number for the course number "+ to_string(i+1) +": " ;
        out<<x.Credit_Hours[i];
        out<<"the Grade for the course number "+ to_string(i+1) +": " ;
        out<<x.Grades[i];
        out<<endl;
    }
    out<<"the GPA : ";
    out<<x.calculateGPA().doubleValue();*/
return out;
}

istream & operator >> (istream & in, Student & x){

    /*cout<<"Enter the Name : ";
    getline(in,x.Name);
    cout<<"Enter the ID : ";
    in>>x.ID;
    cout<<"Enter the number of courses : ";
    in>>x.arrSize;
    cin.ignore();
    x.Credit_Hours = new int[x.arrSize];
    x.Grades = new Rational[x.arrSize];
    for(int i=0;i<x.arrSize;i++){
        cout<<"Enter the Credit hours number for the course number "+ to_string(i+1) +": " ;
        in>>x.Credit_Hours[i];
        cout<<"Enter the Grade for the course number "+ to_string(i+1) +": "<<endl ;
        in>>x.Grades[i];
        cin.ignore();
    }*/
return in;
}

Student::~Student()
{
    for(int i=0;i<6;i++){
        delete courselist[i];
    }


}

bool Student::RegisterCourse(Course* course){
  if(NoOfCourses==6){
    return false;
  }
  else{
        if(course->getminstdlvl<=this->Level){
    courselist[NoOfCourses]=course;
    NoOfCourses++;
    return true;}else{
    return false;
    }
  }

}
 void  student::printRegisteredCourses(){


 }

