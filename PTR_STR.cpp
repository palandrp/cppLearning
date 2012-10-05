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
   show_string("Учимся программировать на языке C++!"); 
}