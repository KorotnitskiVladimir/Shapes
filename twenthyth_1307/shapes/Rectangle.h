#pragma once
#include "Shape.h"

class Rectangle:public Shape
{
    int lenght;
    int width;
public:
    Rectangle() = default;
    Rectangle(int a, int b, int c, int d): Shape(a, b) {lenght = c; width = d;}
    void setLenght(int c);
    void setWidth(int d);
    int getLenght() const;
    int getWidth() const;
    void Show() const override;
};
