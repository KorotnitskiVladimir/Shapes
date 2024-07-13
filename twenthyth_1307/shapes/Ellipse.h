#pragma once
#include "Shape.h"

class Ellipse:public Shape
{
    int lenght;
    int width;
public:
    Ellipse() = default;
    Ellipse(int a, int b, int l, int w): Shape(a, b) {lenght = l; width = w;}
    void setLenght(int l);
    void setWidth(int w);
    int getLenght() const;
    int getWidth() const;
    void Show() const override;
};
