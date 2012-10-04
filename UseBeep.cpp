#include <iostream>
using namespace std;

void sound_beeps(int beeps)
{
	for(int counter = 1; counter <= beeps; counter++)
		cout << '\a';
}

int main(void)
{
	sound_beeps(2);
	sound_beeps(3);
}