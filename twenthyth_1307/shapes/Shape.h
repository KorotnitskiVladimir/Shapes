#pragma once

class Shape
{
protected:
    int x;
    int y;
public:
    Shape() = default;
    Shape(int a, int b): x(a), y(b) {}
    void setX(int a);
    void setY(int b);
    int getX() const;
    int getY() const;
    virtual void Show() const = 0;
};
