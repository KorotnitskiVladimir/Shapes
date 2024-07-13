#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::setRadius(int r)
{
    if (r>0)
        radius = r;
}

int Circle::getRadius() const
{
    return radius;
}

void Circle::Show() const
{
    cout << "Circle: " << endl << "coordinates of center: " << x << ":" << y << endl << "Radius: " << radius << endl;
}
