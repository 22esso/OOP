?'/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 class RegularPolygon{
 private:
     int n;
     int side;
     double x;
     double y;
 public:
     ///n=3, side=1, x=0, and y=0.
     RegularPolygon(){
     n=3;
     side=1;
     x=0;
     y=0;
     }
     ///A constructor that creates a regular polygon with the
///specified number of sides and length of side, and centered
///at (0, 0).

     RegularPolygon(int n,int side,double x=0,double y=0){
     this->n=n;
     this->side=side;
     this->x=x;
     this->y=y;
     }
     ///copy constructor
     RegularPolygon(RegularPolygon &temp){
     this->n=temp.n;
     this->side=temp.side;
     this->x=temp.x;
     this->y=temp.y;
     }

     ///Copy function
     void Copy(RegularPolygon &temp){
     this->n=temp.n;
     this->side=temp.side;
     this->x=temp.x;
     this->y=temp.y;
     }
     ///getters
     int const get_n(){
     return n;
     }

    int const get_side(){
     return side;
     }
     double const get_x(){
     return x;
     }
     double const get_y(){
     return y;
     }
    ///setters

     void set_n(int const n){
     this->n=n;
     }


     void set_side(int const side){
     this->side=side;
     }


     void set_x(double const x){
     this->x=x;
     }

     void set_y(double const y){
     this->y=y;
     }

    ///getPerimeter function
    int const  getperimeter(){
    return n*side;
    }
    /// Area function
    double const getarea(){
    ///M_PI is the PI constant value in the c.math library
    double area=(n*side*side)/(4*tan(double(M_PI)/n));
    return area;
    }

    ///destructor
    ~RegularPolygon(){
    /// no dynamic allocation or pointers have been used
    }
    friend void printPolygons(RegularPolygon arr[],int size);



 };
void printPolygons(RegularPolygon arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Polygon number "<<i+1<<" : "<<endl;
        cout<<"Number of sides : "<<arr[i].n<<endl;
        cout<<"Side length : "<<arr[i].side<<endl;
        cout<<"X-coordinate : "<<arr[i].x<<endl;
        cout<<"Y-coordinate : "<<arr[i].y<<endl;
        cout<<"Perimeter : "<<arr[i].getperimeter()<<endl;
        cout<<"Area : "<<arr[i].getarea()<<endl;

        cout<<endl<<endl;
    }
    }



int main()
{
    ///simple tests

    ///default constructor
    RegularPolygon A;
    /// constructor with 2 parameters
    RegularPolygon B(6,4);
    /// constructor with 4 parameters
    RegularPolygon C(10,4,5.6,7.8);
    /// copy constructor
    RegularPolygon D(C);

    ///creating an array of Polygons
    RegularPolygon arr[4];
    arr[0].Copy(A);
    arr[1].Copy(B);
    arr[2].Copy(C);
    arr[3].Copy(D);
    printPolygons(arr,4);

    return 0;
}
