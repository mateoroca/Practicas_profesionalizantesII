#ifndef ISOSCELESTRIANGLE
#define ISOSCELESTRIANGLE

#include "Shape.h"


class isoscelesTriangle : implement Shape
{
private:
    float side1,base,height;
public:
    isoscelesTriangle(float _side1,float _base,float _height):side1{_side1},base{_base},height{_height}{}
    
    float getPerimeter(){
      return (side1*2)+base;
    }

    float getArea(){
       return ((base*height)/2);
    }
};



#endif // !ISOSCELESTRIANGLE