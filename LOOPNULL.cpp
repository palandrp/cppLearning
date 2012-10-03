#include <iostream>

using namespace std;

int main(void)
{
	char alphabet[27];
	char letter;
	int  index;
	
	for (letter = 'A', index = 0; letter <= 'Z'; letter++, index++)
		alphabet[index] = letter;
	
	alphabet[index] = '\0';

	for(index = 0; alphabet[index] != '\0'; index++)
		cout << alphabet[index];

	cout << endl;
}