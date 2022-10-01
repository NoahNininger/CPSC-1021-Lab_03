#ifndef CIRCLE_H_
#define CIRCLE_H_       // header file for class Circle

class Circle
{
    private:
        double radius;
    
    public:
        bool setRadius(double);     // setter function

        double getRadius();         // getter function
        
        double calcArea();          // calcArea() prototype
};

#endif