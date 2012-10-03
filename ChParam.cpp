#include <iostream>
//#include <locale.h>	//Работа с кодировками(?)
using namespace std;

void change_values(int *a, int *b)	//УКАЗАТЕЛЬ на тип int
{
	*a = 1001;	//Сообщаем С++, что он работает с АДРЕСОМ параметра
	*b = 1001;	//Звездочка (*) называется "оператор разыменования"
	cout << "Значение в функции change_values " << *a << " и " 
		<< *b << endl;
}

int main(void)
{
	//setlocale(LC_ALL,".1251");	//Установка кодировочной страницы
	int big = 2002, small = 0;
	cout << "Значение перед фнкцией " << big << " и " << small << endl;
	change_values(&big, &small);	//Передача параметра по АДРЕСУ
	cout << "Значение после функции " << big << " и " << small << endl;
}