#include <iostream> 
#include <string.h> 

using namespace std;

class Dogs 
{ 
public: 

   char breed[64]; 
   int  average_weight; 
   int  average_height; 

   void showDog(void); 
}; 

void Dogs::showDog(void) 
{ 
   cout << "Порода: "         << breed          << endl; 
   cout << "Средний вес: "    << average_weight << endl; 
   cout << "Средняя высота: " << average_height << endl; 
};

int main(void) 

{ 
   Dogs Happy, Matt; 

   strcpy(Happy.breed, "Долматин"); 
   Happy.average_weight = 58; 
   Happy.average_height = 24; 

   strcpy(Matt.breed, "Колли"); 
   Matt.average_weight = 22; 
   Matt.average_height = 15; 

   Happy.showDog(); 

   cout << endl;

   Matt.showDog(); 
}