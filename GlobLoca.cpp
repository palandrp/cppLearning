#include <iostream>
using namespace std;

int number = 1001;	//Global variable

void show_numbers(int number)
{
	cout << "Local variable \'number\' contains " << 
		number << endl;
	cout << "Global variable \'number\' contains " << 
		::number << endl;
}

int main(void)
{
	int some_value = 2002;
	show_numbers(some_value);
}