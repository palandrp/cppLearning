#include <iostream>

using namespace std;

void get_values(int array[], int number_of_elements)
{
	int i;
	for (i = 0; i < number_of_elements; i++){
		cout << "Enter a value " << i << ": ";
		cin >> array[i];
		cout << endl;
	}
}

int main(void)
{
	int numbers[3];
	get_values(numbers, 3);
	cout << "Values of array:" << endl;
	for (int i = 0; i < 3; i++)
		cout << numbers[i] << endl;
}