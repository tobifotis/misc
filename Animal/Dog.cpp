#include "Dog.h"

#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight)
{
    this->breed = breed;
}

string Dog::getBreed() const
{
    return breed;
}

string Dog::makeNoise() const
{
    return "woof!";
}

void Dog::digHole() const
{
    cout << "I'm digging a hole!" << endl;
}

void Dog::chaseCat() const
{
    cout << "Here, kitty kitty!" << endl;
}