// Dynamic Memory Allocation with ARRAY
#include <iostream>

using namespace std;

int main()
{
    int SIZE;
    cout << "Hello user, kindly enter a size for array: ";
    cin >> SIZE;

    int *myArray = new int[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        myArray[i] = (i + 1) * 2;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << myArray[i] << endl;
    }

    delete[] myArray;

    return 0;
}