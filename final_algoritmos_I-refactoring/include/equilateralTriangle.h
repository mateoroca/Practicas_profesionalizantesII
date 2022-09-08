#ifndef EQUILATERALTRIANGLE.H
#define EQUILATERALTRIANGLE.H
#include "Shape.h"


class equilateralTriangle : implement Shape 
{
private:
    float height,base;
    
public:
    equilateralTriangle(float _height,float _base):height{_height},base{_base}{}
    float getPerimeter(){
        return base*3;
    }
    float getArea(){
        return ((base*height)/2);
    }
    
};








#endif // equilateralTriangle.h