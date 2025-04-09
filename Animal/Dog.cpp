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

string Dog::eat() const
{
    return "I love dog food!";
}


void Dog::digHole() const
{
    cout << "I'm digging a hole!" << endl;
}

void Dog::chaseCat() const
{
    cout << "Here, kitty kitty!" << endl;
}