//Not work...

#include <iostream>

using namespace std;

char *string_uppercase(char *string)
{
    char *starting_address = string;

    while(*string)
    {
        if((*string >= 'a') && (*string <= 'z'))
            *string = *string - 'a' + 'A';
        string++;
    }

    return(starting_address);
}

int main(void)
{
    cout << string_uppercase("hello world!");
}