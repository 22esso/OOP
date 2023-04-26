#include "Rational.h"

Rational::Rational()
{
    this->numerator=1;
    this->denominator=1;
}


Rational::Rational(int numerator,int denominator){

    this->numerator=numerator;
    this->denominator=denominator;
    int GCD=gcd(this->numerator,this->denominator);
    this->numerator= this->numerator/GCD;
    this->denominator= this->denominator/GCD;

}
leeh foo2 3mlt this operator w gcd  
int const Rational:: getNumerator(){

    return numerator;
}
int const Rational:: getDenominator(){

    return denominator;
}
void Rational:: setNumerator(int numerator){

    this->numerator=numerator;
    int GCD=gcd(this->numerator,this->denominator);
    this->numerator= this->numerator/GCD;
    this->denominator= this->denominator/GCD;
}
void Rational:: setDenominator(int denominator){

    this->denominator=denominator;
    int GCD=gcd(this->numerator,this->denominator);
    this->numerator= this->numerator/GCD;
    this->denominator= this->denominator/GCD;
}

Rational const Rational:: operator + (Rational SecondRational){

    this->numerator=this->numerator*SecondRational.getDenominator();
    this->numerator=this->numerator+(SecondRational.getNumerator()*this->denominator);
    this->denominator=this->denominator*SecondRational.getDenominator();
    int GCD=gcd(this->numerator,this->denominator);
    this->numerator= this->numerator/GCD;
    this->denominator= this->denominator/GCD;
    return (*this);

}
leeh msh lhs.denomenator
Rational const Rational:: operator - (Rational SecondRational){
    this->numerator=this->numerator*SecondRational.getDenominator();
    this->numerator=this->numerator - SecondRational.getNumerator()*this->denominator;
    this->denominator=this->denominator*SecondRational.getDenominator();
    int GCD=gcd(this->numerator,this->denominator);
    this->numerator= this->numerator/GCD;
    this->denominator= this->denominator/GCD;
    return (*this);
}
Rational const Rational:: operator * (Rational SecondRational){

    this->numerator=this->numerator*SecondRational.getNumerator();
    this->denominator=this->denominator*SecondRational.getDenominator();
    int GCD=gcd(this->numerator,this->denominator);
    this->numerator= this->numerator/GCD;
    this->denominator= this->denominator/GCD;
    return (*this);

}
Rational const Rational:: operator / (Rational SecondRational){

    this->numerator=this->numerator*SecondRational.getDenominator();
    this->denominator=this->denominator*SecondRational.getNumerator();
    int GCD=gcd(this->numerator,this->denominator);
    this->numerator= this->numerator/GCD;
    this->denominator= this->denominator/GCD;
    return (*this);
}
leeh da int GCD=gcd(this->numerator,this->denominator);




Rational const Rational:: operator = (Rational SecondRational){
    this->numerator=SecondRational.getNumerator();
    this->denominator=SecondRational.getDenominator();
    int GCD=gcd(this->numerator,this->denominator);
    this->numerator= this->numerator/GCD;
    this->denominator= this->denominator/GCD;
    return (*this);
}

bool const Rational:: operator == (Rational SecondRational){
    if(this->numerator==SecondRational.getNumerator() && this->denominator == SecondRational.getDenominator()){
        return true;
    }
    else{
        return false;
    }

}
int const Rational:: compareTo (Rational SecondRational){

    int unified_denominator= this->denominator * SecondRational.getDenominator();

    if(this->numerator==SecondRational.getNumerator() && this->denominator == SecondRational.getDenominator()){
        return 0;
    }
    else if(this->numerator*SecondRational.getDenominator() / unified_denominator < SecondRational.getNumerator()*this->denominator/ unified_denominator){

        return -1;
    }
    else if(this->numerator*SecondRational.getDenominator() / unified_denominator < SecondRational.getNumerator()*this->denominator/ unified_denominator){

        return 1;
    }

}
int const Rational:: intValue(){

    return this->numerator/this->denominator;

}
double const Rational:: doubleValue(){

return 1.0*this->numerator/this->denominator;

}
string const Rational:: toString(){

string temp= to_string(this->numerator);
if(this->getDenominator()>1){
temp+= " / " + to_string(this->denominator);
}
return temp;

}

int Rational:: gcd(int n,int d){

    return __gcd(n,d);
}

ostream & operator << (ostream & out, Rational & x){

out << x.toString();
return out;
}

istream & operator >> (istream & in, Rational & x){
    cout<<"insert the numerator : ";
    in>>x.numerator;
    cout<<"insert the Denominator : ";
    in>>x.denominator;
    int GCD=__gcd(x.numerator,x.denominator);
    x.numerator= x.numerator/GCD;
    x.denominator= x.denominator/GCD;
    return in;
}

Rational::~Rational()
{

}
leeh destructor