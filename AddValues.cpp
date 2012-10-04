#include <iostream>
using namespace std;

int add_values(int a, int b)
{
	return(a + b);
}

int add_values(int a, int b, int c)
{
	return(a + b + c);
}

int main(void)
{
	cout << "200 + 801 = " << add_values(200,801) << endl;
	cout << "100 + 201 + 700 = " << add_values(100,201,700) << endl;
}