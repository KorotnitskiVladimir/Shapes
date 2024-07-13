#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setLenght(int c)
{
    if (c>0)
        lenght = c;
}

void Rectangle::setWidth(int d)
{
    if(d>0)
        width = d;
}

int Rectangle::getLenght() const
{
    return lenght;
}

int Rectangle::getWidth() const
{
    return width;
}

void Rectangle::Show() const
{
    cout << "Rectangle: " << endl << "Coordinates of upper left corner: " << x << ":" << y << endl;
    cout << "Rectangle's lenght: " << lenght << ", " << "width: " << width << endl;
}
