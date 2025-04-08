#include <iostream>
#include "Circle.h"

using namespace std;

void printCircleData(Circle &c);

int main()
{
    Circle c1;
    Circle c2(5);

    printCircleData(c1);
    printCircleData(c2);

    return 0;
}

void printCircleData(Circle &c)
{
    cout << "Circle with radius " << c.getRadius() << endl;
    cout << "\tCircumference: " << c.circumference() << endl;
    cout << "\tArea: " << c.area() << endl;
    cout << "\n";
}