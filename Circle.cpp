#include <cmath>
#include "Circle.h"

bool Circle::setRadius(double r)
{
    radius = r;     // sets function argument to member variable declared in class Circle
    if(r >= 0)
        { return true; }    // input validation
    else 
        { return false; }
}

double Circle::getRadius()
    { return radius; } // returns the set value of the member variable declared in class Circle

double Circle::calcArea()
    { return 3.14 * pow(radius, 2); }   // calculates area of a circle