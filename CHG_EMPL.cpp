#include <iostream>
#include <string.h>

using namespace std;

struct employee
{
    char  name[64];
    long  employee_id;
    float salary;
    char  phone[10];
    int   office_number;
};

void get_employee_id(employee *worker)
{
    cout << "Enter employee ID: ";
    cin  >> worker->employee_id;
}

int main(void)
{
    employee worker;

    //Копировать имя в строку 
    strcpy(worker.name,"Джон Дой");

    get_employee_id(&worker);
    cout << "worker: "    << worker.name        << endl;
    cout << "worker ID: " << worker.employee_id << endl;
}