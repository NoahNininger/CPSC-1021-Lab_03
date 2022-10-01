// program to calculate areas of shapes using classes & objects
// Noah Nininger
#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Trapezoid.h"

using namespace std;
 
int main()
{
    Circle circle;      // necessary objects derrived from each specific class
    Square square;
    Rectangle rectangle;
    Trapezoid trapezoid;

    int userInput;                  // user input for menu choice
    double radius;                    // needed for circle calculation
    double length, width;           // needed for square & rectangle calculations
    double base1, base2, height;    // needed for trapezoid calculation
    
    cout << "Program to calculate areas of objects" << endl     // MENU
        << "1 -- circle" << endl
        << "2 -- square" << endl
        << "3 -- rectangle" << endl
        << "4 -- trapezoid" << endl
        << "5 -- quit" << endl
        << "Choose an Option: ";
    cin >> userInput;   // recieves user input
    
    while (userInput < 1 || userInput > 5)        // input validation for menu choice, assumes input is a number
    {
        cout << "Invalid Input - MUST be in the range of 1-5: ";
        cin >> userInput;
    }

    switch (userInput)
    {
        case 1:                         // if user chose to calculate that area of a circle
            cout << "Radius: ";
            cin >> radius;

            while (circle.setRadius(radius) == false)   // input validation, tests if number is negative
            {
                cout << "Invalid Input - MUST be a positive number: ";
                cin >> radius;
            }

            cout << "Area: " << fixed << showpoint << setprecision(1) << circle.calcArea() << endl;
                              /* sets the output to 1 decimal point */
            break;
        case 2:                         // if user chose to calculate that area of a square
            cout << "Length: ";
            cin >> length;

            while (square.setSide(length) == false) // input validation, tests if number is negative
            {
                cout << "Invalid Input - MUST be a positive number: ";
                cin >> length;
            }

            cout << "Area: " << fixed << showpoint << setprecision(1) << square.calcArea() << endl; // prints calculation
                              /* sets the output to 1 decimal point */
            break;
        case 3:                         // if user chose to calculate that area of a rectangle
            cout << "Length: ";
            cin >> length;

            while (rectangle.setLength(length) == false) // input validation, tests if number is negative
            {
                cout << "Invalid Input - MUST be a positive number: ";
                cin >> length;
            }

            cout << "Width: ";
            cin >> width;

            while (rectangle.setWidth(width) == false) // input validation, tests if number is negative
            {
                cout << "Invalid Input - MUST be a positive number: ";
                cin >> width;
            }

            cout << "Area: " << fixed << showpoint << setprecision(1) << rectangle.calcArea() << endl; // prints calculation
                              /* sets the output to 1 decimal point */
            break;
        case 4:                         // if user chose to calculate that area of a trapezoid
            cout << "Base 1: ";
            cin >> base1;

            while (trapezoid.setBase1(base1) == false) // input validation, tests if number is negative
            {
                cout << "Invalid Input - MUST be a positive number: ";
                cin >> base1;
            }

            cout << "Base 2: ";
            cin >> base2;

            while (trapezoid.setBase2(base2) == false) // input validation, tests if number is negative
            {
                cout << "Invalid Input - MUST be a positive number: ";
                cin >> base2;
            }

            cout << "Height: ";
            cin >> height;

            while (trapezoid.setHeight(height) == false) // input validation, tests if number is negative
            {
                cout << "Invalid Input - MUST be a positive number: ";
                cin >> height;
            }

            cout << "Area: " << fixed << showpoint << setprecision(1) << trapezoid.calcArea() << endl; // prints calculation
                              /* sets the output to 1 decimal point */
            break;
        // case 5: quits the program
    }
 
   return 0;
}