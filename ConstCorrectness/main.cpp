#include <iostream>

using namespace std;

// Non-constant pointer to non-constant data
void noConst();

// Costant pointer to non-constant data
void cp2ncd();

// Non-constant pointer to constant data
void ncp2cd();

// Constant pointer to constant data
void cp2cd();

void noChange(const double *const someValue);

int main()
{
    double *myDubzPtr = new double(5.25);

    noConst();
    cout << endl;

    cp2ncd();
    cout << endl;

    ncp2cd();
    cout << endl;

    cp2cd();
    cout << endl;

    noChange(myDubzPtr);

    delete myDubzPtr;
    myDubzPtr = nullptr;

    return 0;
}

// neither is a constant (both can be changed)
void noConst()
{
    cout << "In noConst" << endl;
    int *intPtr = new int;
    *intPtr = 50;

    cout << "\tOriginal value: " << *intPtr << endl;

    *intPtr = 100;

    cout << "\tChanged value: " << *intPtr << endl;

    delete intPtr;
    intPtr = new int(125);

    cout << "\tnew integer entirely: " << *intPtr << endl;

    delete intPtr;
}

// pointer is constant (cannot be changed)
// data is not constant (can be changed)
void cp2ncd()
{
    cout << "In cp2ncd" << endl;

    int *const intPtr = new int(100);
    cout << "\tOriginal value: " << *intPtr << endl;

    *intPtr = 250;

    cout << "\tChanged value: " << *intPtr << endl;

    delete intPtr;

    // intPtr = new int(226) ->
    // Illegal! because pointer is constant; Can only point to one value
}

// pointer is not constant (can be changed)
// data is constant (can not be changed)
void ncp2cd()
{
    cout << "In ncp2cd" << endl;
    const int *intPtr = new int(500);

    cout << "\tOriginal value: " << *intPtr << endl;

    delete intPtr;

    intPtr = new int(100); // ok! because change is on pointer

    // *intPtr = new int(100); illegal, because change on data(dereference!)
    delete intPtr;
}

// both are constant (neither can be changed)
void cp2cd()
{
    const int *const intPtr = new int(5000);
    cout << "In cp2cd" << endl;

    cout << "\tOriginal value: " << *intPtr << endl;

    // NO CHANGES ALLOWED
    delete intPtr;
}

void noChange(const double *const someValue)
{
    cout << *someValue << endl;
}
