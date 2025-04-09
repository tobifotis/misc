#include <iostream>

using namespace std;

class Person
{
public:
    string name;

    class Address
    {
    public:
        string country;
        string stname; // streetname
        int hno;       // house number
    };

    Address addr;

    void AddressPlease()
    {
        cout << "\n";
        cout << name << ":" << endl;
        cout << "Lives at " << addr.hno << " " << addr.stname << ", in " << addr.country << ".\n\n";
    }
};

int main()
{
    Person alex;
    alex.name = "Lindoso";
    alex.addr.country = "Brazil";
    alex.addr.stname = "recife street";
    alex.addr.hno = 3205;

    alex.AddressPlease();

    return 0;
}