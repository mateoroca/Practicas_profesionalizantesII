#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include "Shape.h"
using namespace std;

class Square : implement Shape
{
    private:
        float m_side;
    public:
        Square(float side);
        ~Square();
        float getPerimeter();
        float getArea();
};


#endif