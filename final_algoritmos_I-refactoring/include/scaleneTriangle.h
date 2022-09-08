#ifndef SCALENETRIANGLE
#define SCALENETRIANGLE
#include "Shape.h"


class scaleneTriangle : implement Shape
{
private:
    float side1,side2,base,height;
public:
    scaleneTriangle(float _side1,float _side2,float _base,float _height):side1{_side1},side2{_side2},base{_base},height{_height}{}

       float getPerimeter(){
        return side1+side2+base;
       }
        float getArea(){
            return ((base*height)/2);
        }
   
};






#endif // !SCALENETRIANGLE