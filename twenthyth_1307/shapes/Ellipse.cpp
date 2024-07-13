#include "Ellipse.h"
#include <iostream>
using namespace std;

void Ellipse::setLenght(int l)
{
    if (l>0)
        lenght = l;
}

void Ellipse::setWidth(int w)
{
    if (w>0)
        width = w;
}

int Ellipse::getLenght() const
{
    return lenght;
}

int Ellipse::getWidth() const
{
    return width;
}

void Ellipse::Show() const
{
    cout << "Ellipse: " << endl << "Coordinates of center: " << x << ":" << y << endl;
    cout << "Max lenght: " << lenght << ", max width: " << width << endl;
}
