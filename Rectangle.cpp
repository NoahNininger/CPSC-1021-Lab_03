#include <cmath>
#include "Rectangle.h"

bool Rectangle::setLength(double l)
{
    length = l;     // sets function argument to member variable declared in class Rectangle
    if(l >= 0)
        { return true; }    // input validation
    else 
        { return false; }
}

bool Rectangle::setWidth(double w)
{
    width = w;     // sets function argument to member variable declared in class Rectangle
    if(w >= 0)
        { return true; }    // input validation
    else 
        { return false; }
}

double Rectangle::getLength()
    { return length; } // returns the set value of the member variable declared in class Rectangle

double Rectangle::getWidth()
    { return width; } // returns the set value of the member variable declared in class Rectangle

double Rectangle::calcArea()
    { return length * width; }  // calculates are of a rectangle