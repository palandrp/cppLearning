#include <iostream>

using namespace std;

void show_parameters(int a = 1, int b = 2, int c = 3)
{
	cout << "a" << a << "b" << b << "c" << c << endl;
}

int main(void)
{
	show_parameters();
	show_parameters(1001);
	show_parameters(1001,2002);
	show_parameters(1001,2002,3003);
}