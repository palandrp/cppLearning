#include <iostream>

using namespace std;

int main(void)
{
	int values[5]; //Объявление массива
	values[0] = 100;
	values[1] = 200;
	values[2] = 300;
	values[3] = 400;
	values[4] = 500;
	cout << "Array contains the following values:" << endl;
	cout << values[0] << " " << values[1] << " " << values [2] << " "
		 << values[3] << " " << values[4] << endl;
}