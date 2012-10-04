#include <iostream>
using namespace std;

void show_message(void)
{
	cout << "A" << endl;
}

void show_message(char *message)
{
	cout << *message << endl;
}

void show_message(char *first, char *second)
{
	cout << *first << " + " << *second << endl;
}

int main(void)
{
	show_message();
	char messageLearn = 'B';
	show_message(&messageLearn);
	char messagePrejudice = 'C';
	char messageCool = 'D';
	show_message(&messagePrejudice,&messageCool);
}