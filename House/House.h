#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include <iostream>

using namespace std;

class House
{
private:
    int numStories;
    int numWindows;
    string color;

public:
    House();

    House(int numStories, int numWindows, string color);

    //~House();

    void setNumStories(int numStories);

    void setNumWindows(int numWindows);

    void setColor(string color);

    void print() const;

    int getNumStories() const;

    int getNumWindows() const;

    string getColor() const;
}; // end of the class

#endif