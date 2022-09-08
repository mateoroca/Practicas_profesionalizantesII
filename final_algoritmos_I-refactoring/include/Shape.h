#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;
#define implement public

class Shape
{
    public:
        //virtual ~Shape() {}
        virtual float getPerimeter() = 0;
        virtual float getArea() = 0;
};
#endif //SHAPE_H