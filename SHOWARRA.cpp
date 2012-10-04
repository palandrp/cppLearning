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
	
	for (int i = 0; i < 5; i++) 
		cout << values[i] << endl;

	cout << endl;

	for (int i = 4; i >= 0; i--)
		cout << values[i] << endl;

	cout << endl;


	int number[5] = { 1, 2, 3 };

	for (int i = 0; i < 5; i++)
		cout << number[i] << endl;

	cout << endl;

	int fluc_number[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++)
		cout << fluc_number[i] << endl;

	cout << endl;
}