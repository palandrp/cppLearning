#include <iostream>

using namespace std;

void show_float(float *array, int number_of_elements)
{
    int i;
    for(i = 0; i < number_of_elements; i++)
        cout << *array++ << endl;
}

int main(void)
{
    float values[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    show_float(values, 5);
}