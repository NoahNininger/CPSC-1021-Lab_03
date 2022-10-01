#ifndef RECTANGLE_H_
#define RECTANGLE_H_       // header file for class Rectangle

class Rectangle
{
    private:
        double length;
        double width;
    
    public:
        bool setLength(double);     // setter functions
        bool setWidth(double);

        double getLength();         // getter functions
        double getWidth();
        
        double calcArea();          // calcArea() prototype
};

#endif