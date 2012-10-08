#include <iostream>

using namespace std;

void show_string(char *string)
{
    while(*string) cout << *string++;
    
    cout << endl;
}

int string_length(char *string)
{
    int length = 0;
    
    while (*string++) length++;
    
    return(length);
}

int main(void)
{
    char title[] = "We learn programming in C++";
    
    show_string(title);
    
    cout << "Contains " << string_length(title) << " symbols.";
    cout << endl;
}