#include <iostream>
#include "../include/Square.h"
using namespace std;

Square::Square(float side)
{
    m_side = side;
}

Square::~Square(){}

float Square::getPerimeter()
{
    return 4 * m_side;
};

float Square::getArea()
{
    return m_side * m_side;
};