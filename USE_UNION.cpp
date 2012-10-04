#include <iostream>

using namespace std;

int main(void)
{
    union distance
    {
        int  miles;
        long meters;
    } walk;

    walk.miles  = 5;

    cout << "Distance traveled in miles "  << walk.miles  << endl;

    walk.meters = 10000;

    cout << "Distance traveled in meters " << walk.meters << endl;
}