#include <cmath>
#include "Trapezoid.h"

bool Trapezoid::setBase1(double b1)
{
    base1 = b1;     // sets function argument to member variable declared in class Trapezoid
    if(b1 >= 0)
        { return true; }    // input validation
    else 
        { return false; }
}

bool Trapezoid::setBase2(double b2)
{
    base2 = b2;     // sets function argument to member variable declared in class Trapezoid
    if(b2 >= 0)
        { return true; }    // input validation
    else 
        { return false; }
}

bool Trapezoid::setHeight(double h)
{
    height = h;     // sets function argument to member variable declared in class Trapezoid
    if(h >= 0)
        { return true; }    // input validation
    else 
        { return false; }
}

double Trapezoid::getBase1()
    { return base1; } // returns the set value of the member variable declared in class Trapezoid

double Trapezoid::getBase2()
    { return base2; } // returns the set value of the member variable declared in class Trapezoid

double Trapezoid::getHeight()
    {return height; } // returns the set value of the member variable declared in class Trapezoid

double Trapezoid::calcArea()
{
    return (height * ((base1 + base2) / 2));    // calculates area of Trapezoid
}