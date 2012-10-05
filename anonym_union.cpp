#include <iostream>

using namespace std;

int main(void)
{
    union
    {
        int  miles;
        long meters;
    };

    miles = 10000;

    cout << "Value in miles "  << miles  << endl;

    meters = 150000;

    cout << "Value in meters " << meters << endl;
}