#pragma once
#include "Shape.h"

class Square :public Shape
{
    int side;
public:
    Square() = default;
    Square(int a, int b, int c): Shape(a, b) {side = c;}
    void setSide(int c);
    int getSide() const;
    void Show() const override;
};
