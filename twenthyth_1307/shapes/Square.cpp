#include "Square.h"
#include <iostream>
using namespace std;

void Square::setSide(int c)
{
    if (c>0)
        side = c;
}

int Square::getSide() const
{
    return side;
}

void Square::Show() const
{
    cout << "Rectangle: " << endl << "Coordinates of left upper corner: " << x << ":" << y << endl;
    cout << "lenght of square's side: " << side << endl;
}
