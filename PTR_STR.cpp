#include <iostream>

using namespace std;

void show_string(char *string)

{
   while (*string != '\0')
   { 
      cout << *string;
      string++;
    }
}

int main(void) 

{
//warning: deprecated conversion from string constant to 'char*'
   show_string("Учимся программировать на языке C++!");
}