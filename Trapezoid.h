#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_       // header file for class Trapezoid

class Trapezoid
{
    private:
        double base1;
        double base2;
        double height;
    
    public:
        bool setBase1(double);      // setter functions
        bool setBase2(double);
        bool setHeight(double);

        double getBase1();          // getter functions
        double getBase2();
        double getHeight();

        double calcArea();          // calcArea() prototype
};

#endif