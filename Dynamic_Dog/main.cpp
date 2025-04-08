#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{
    Dog *myDogPtr = new Dog("Rover", "German Sheperd");
    Dog *yourDogPtr = new Dog("Fido", "Beagle");

    cout << (*myDogPtr).getName() << endl;

    cout << "Using arrow member access: \n";
    cout << myDogPtr->getName() << " - " << myDogPtr->getBreed() << endl;
    cout << yourDogPtr->getName() << " - " << yourDogPtr->getBreed() << endl;

    cout << endl;

    cout << "Using dereferencing and the dot operator: \n";
    cout << (*myDogPtr).getName() << " - " << (*myDogPtr).getBreed() << endl;
    cout << (*yourDogPtr).getName() << " - " << (*yourDogPtr).getBreed() << endl;

    delete myDogPtr;
    delete yourDogPtr;

    myDogPtr = nullptr;
    yourDogPtr = nullptr;

    return 0;
}