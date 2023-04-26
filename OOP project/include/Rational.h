#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Rational
{
    public:
        Rational();
        Rational(int numerator,int denominator);
        int const getNumerator();
        int const getDenominator();
        void setNumerator(int numerator);
        void setDenominator(int denominator);
        Rational const operator + (Rational SecondRational);
        Rational const operator - (Rational SecondRational);
        Rational const operator * (Rational SecondRational);
        Rational const operator / (Rational SecondRational);
        Rational const operator = (Rational SecondRational);
        bool const operator == (Rational SecondRational);
        int const compareTo (Rational SecondRational);
        int const intValue();
        double const doubleValue();
        string const toString();
        int gcd(int n,int d);
        friend ostream & operator << (ostream & out,  Rational & x);
        friend istream & operator >> (istream & in, Rational & x);
        ~Rational();
    private:
        int numerator;
        int denominator;

};

#endif // RATIONAL_H
