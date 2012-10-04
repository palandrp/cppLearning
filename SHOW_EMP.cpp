#include <iostream>
#include <string.h>

using namespace std;

struct employee
{
    char name[64];
    long employee_id;
    float salary;
    char phone[10];
    int office_number;
};

void show_employee(employee worker)
{
    cout << "Служащий:"         << worker.name          << endl;
    cout << "Телефон: "         << worker.phone         << endl; 
    cout << "Номер служащего: " << worker.employee_id   << endl; 
    cout << "Оклад: "           << worker.salary        << endl; 
    cout << "Офис: "            << worker.office_number << endl; 
}

int main(void)
{
    employee worker;

    //Копировать имя в строку 
    strcpy(worker.name,"Джон Дой");

    worker.employee_id   = 12345;
    worker.salary        = 25000.00;
    worker.office_number = 102;

    //Копировать номер тулуфона в строку
    strcpy(worker.phone,"555-1212");

    show_employee(worker);
}