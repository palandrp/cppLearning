/*
    NOT WORKS
*/

#include <iostream>

template <class T, class T1> void show_array(T  *array,
                                             T1 count)
{
    T1 index;
    for(index = 0; index < count; index++)
        std::cout << array[index] << ' ' << std::endl;
}

void show_array(int *,
                int);

void show_array(float *,
                unsigned);

int main(void)
{
    int pages[] = {100,
                   200,
                   300,
                   400,
                   500};

    float prices[] = {10.05,
                     20.10,
                     30.15};

    show_array(pages, 5);
    show_array(prices, 3);
}