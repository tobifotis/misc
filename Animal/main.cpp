#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    // Animal myAnimal("Sam", 100);
    Dog dog("Rover", 80, "Greyhound");

    // Base class pointer -> Derived class object
    Animal *dogPtr = new Dog("Fido", 115, "Golden Retriever");

    cout << "Make noise? " << dogPtr->makeNoise() << endl;
    cout << "Eating? " << dogPtr->eat() << endl;



    // cout << "Animal name: " << myAnimal.getName() << endl;
    // cout << "Animal weight: " << myAnimal.getWeight() << endl;
    // cout << "Animal noise: " << myAnimal.makeNoise() << endl;

    // cout << "\n";

    // cout << "Dog's name: " << dog.getName() << endl;
    // cout << "Dog's weight: " << dog.getWeight() << endl;
    // cout << "Dog's noise: " << dog.makeNoise() << endl;
    // cout << "Dog's breed: " << dog.getBreed() << endl;
    // cout << "\n";

    // dog.digHole();

    // cout << "\n";

    // dog.chaseCat();

    return 0;
}