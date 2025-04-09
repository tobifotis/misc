#ifndef CAT_H
#define Cat_h

#include "Animal.h"

class Cat : public Animal
{
public:
    Cat(string name, double weight);
    void chaseMouse();

    string makeNoise() const;
    string eat() const;
};

#endif