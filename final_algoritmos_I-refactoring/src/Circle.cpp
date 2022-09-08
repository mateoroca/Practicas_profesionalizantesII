#include <iostream>
#include "../include/Circle.h"
using namespace std;

Circle::Circle(float radius)
{
    m_radius = radius;
}

Circle::~Circle(){}

float Circle::getPerimeter()
{
    return 2 * 3.14 * m_radius;
};

float Circle::getArea()
{
    return 3.14 * (m_radius * m_radius);
};