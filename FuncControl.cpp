#include <iostream>

using namespace std;

float f(int x)
{
	float a = 100/24.0;
	return a*x;
}

int main(void)
{
	for(int x = 0; x <= 24; x++)
		cout << x << " " << f(x) << endl;
}