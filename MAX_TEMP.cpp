/*
    NOT WORKS
*/

#include <iostream>

template <class T> T maximum(T a,
                             T b)
{
    if(a > b)
        return a;
    else
        return b;
}

float maximum(float,
              float);

int   maximum(int,
              int);


int main(void)
{
    std::cout << "Max 100 & 200 eqil: ";
    std::cout << maximum(100,
                         200);
    std::cout << std::endl;

    std::cout << "Max 5,24435 & 1,434534 eqil: ";
    std::cout << maximum(5.24435,
                         1.434534);
    std::cout << std::endl;
}