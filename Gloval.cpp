#include <iostream>
using namespace std;

int number = 1001;

void first_change(void)
{
	cout << "Value of number in first_change is " << number << endl;
	number++;
}

void second_change(void)
{
	cout << "Value of number in second_change is " << number << endl;
	number++;
}

int main(void)
{
	cout << "Value of number in \"main\" is " << number << endl;
	number++;
	first_change();
	second_change();
	cout << "Value of number in end of \"main\" is " << number << endl;
}