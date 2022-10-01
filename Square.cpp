#include <cmath>
#include "Square.h"

bool Square::setSide(double s)
{
    side = s;     // sets function argument to member variable declared in class Square
    if (s >= 0)
        { return true; }    // input validation
    else
        { return false; }
}

double Square::getSide()
    { return side; } // returns the set value of the member variable declared in class Square       

double Square::calcArea()
{ return pow(side, 2); }    // calculates area of Square