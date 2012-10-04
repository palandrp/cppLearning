#include <iostream>
using namespace std;

void swap_values(float *a, float *b)
{
	float temp;
	temp = *a;
	*a   = *b;
	*b   = temp;
}

int main(void)
{
	float big 	= 10000.0;
	float small = 0.00001;
	swap_values(&big, &small);
	cout << "Big contains: " 	<< big 		<< endl;
	cout << "Small contains: " 	<< small 	<< endl;
}