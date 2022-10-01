#ifndef SQUARE_H_
#define SQUARE_H_       // header file for class Square

class Square
{
    private:
        double side;
    
    public:
        bool setSide(double);       // setter function

        double getSide();           // getter function
        
        double calcArea();          // calcArea() prototype
};

#endif