#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle();
    Rectangle(double length, double width);

    void setLength(double length);
    void setWidth(double width);

    double getLength() const;
    double getWidth() const;

    double area() const;
    double perimeter() const;
};

#endif