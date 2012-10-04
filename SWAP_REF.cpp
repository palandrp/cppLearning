#include <iostream>

using namespace std;

//Функция ожидает ссылки в качестве параметров
void swap_values(float& a, float& b)
{
	float temp;
	
	temp = a;		//
	a    = b;		//	a и b - это ссылки
	b    = temp;	//
}

int main(void)
{
	float  big         = 10000.0;
	float  small       = 0.00001;
	float& big_alias   = big;
	float& small_alias = small;
	
	swap_values(big_alias, small_alias);
	
	cout << "Big contains "   << big   << endl;
	cout << "Small contains " << small << endl;
}