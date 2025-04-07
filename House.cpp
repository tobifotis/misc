#include "House.h"

void House::setNumStories(int numStories)
{
    this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
    this->numWindows = numWindows;
}

void House::setColor(string color)
{
    this->color = color;
}

void House::print()
{
    cout << "Class' house is " << getColor() << " and has " << getNumStories() << " stories and " << getNumWindows() << " windows\n\n";
}

int House::getNumStories() const
{
    return numStories;
}

int House::getNumWindows() const
{
    return numWindows;
}

string House::getColor() const
{
    return color;
}