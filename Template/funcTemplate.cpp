#include <iostream>
#include <string>

using namespace std;

template <class T>
T getBigger(T a, T b);

// double getBigger(double a, double b);
// int getBigger(int a, int b);
// string getBigger(string a, string b);

int main()
{
    string name1 = "John";
    string name2 = "Alice";

    double biggerDub = getBigger(3.14, 5.55);
    int biggerInt = getBigger(11, 9);
    string biggerStr = getBigger(name1, name2);

    cout << "Bigger items: " << endl;
    cout << "\t" << biggerDub << endl;
    cout << "\t" << biggerInt << endl;
    cout << "\t" << biggerStr << endl;

    return 0;
}

template <class T>
T getBigger(T a, T b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}
