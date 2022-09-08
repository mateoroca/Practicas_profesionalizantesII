#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "Shape.h"
using namespace std;

class Circle : implement Shape
{
    private:
        float m_radius;
    public:
        
        Circle(float radius);
        ~Circle();
        float getPerimeter();
        float getArea();
};
#endif