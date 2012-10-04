#include <iostream>

using namespace std;

void show_array(int array[], int number_of_elements)
{
	int i;
	for (i = 0; i < number_of_elements; i++)
		cout << array[i] << endl;
}

int main(void)
{
	int little_numbers[5] = {1,2,3,4,5};
	int big_numbers[3] = {1001,2002,3003};
	show_array(little_numbers, 5);
	show_array(big_numbers, 3);
}