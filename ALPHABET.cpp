#include <iostream>

using namespace std;

int main(void)
{
	int array_volume = 27; //26 letters plus NULL char letter;
	char alphabet[array_volume];
	int index;
	char letter;

	for(letter = 'A', index = 0; letter <= 'Z'; letter++, index++)
		alphabet[index] = letter;

	alphabet[index] = '\0';

	cout << "Index/Letter: " << endl;
	for(index = 0; index < array_volume; index++){
		cout << index << "/";
		cout << alphabet[index];
		cout << endl;
	}

	cout << "String: " << alphabet << endl;
}