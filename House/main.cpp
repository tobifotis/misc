#include <iostream>
#include "House.h"

using namespace std;

void printHouseData(House h1);

int main()
{
    House myHouse;
    House functionHouse;
    House classHouse;
    House paramClassHouse(2, 10, "green");

    myHouse.print();

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");

    classHouse.setNumStories(4);
    classHouse.setNumWindows(8);
    classHouse.setColor("yellow");

    cout << "\nMy house is " << myHouse.getColor() << " and has " << myHouse.getNumStories() << " stories and " << myHouse.getNumWindows() << " windows\n";
    printHouseData(functionHouse);
    classHouse.print();
    paramClassHouse.print();


    return 0;
}

void printHouseData(House h1)
{
    h1.setNumStories(3);
    h1.setNumWindows(10);
    h1.setColor("blue");
    cout << "Functions' house is " << h1.getColor() << " and has " << h1.getNumStories() << " stories and " << h1.getNumWindows() << " windows\n";
}