#pragma once
#include "Shape.h"

class Circle: public Shape
{
    int radius;
public:
    Circle() = default;
    Circle(int a, int b, int r): Shape(a, b) {radius = r;}
    void setRadius(int r);
    int getRadius() const;
    void Show() const override;
};
