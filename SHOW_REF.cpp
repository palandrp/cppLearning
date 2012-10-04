#include <iostream>

using namespace std;

int main(void)
{
	int number = 501;
	int& alias_name = number; //Создаем ССЫЛКУ
	cout << "Variable \"number\" contains " << number << endl;
	cout << "Alias for \"number\" contains " << alias_name << endl;
	alias_name += 500;
	cout << "Variable \"number\" after alias change is " << number << endl;
	cout << "Alias for \"number\" after change is " << alias_name << endl;
}