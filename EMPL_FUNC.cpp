#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
public:

    char  name[64];
    long  employee_id;
    float salary;

    void  showEmployee(void);
};

void  Employee::showEmployee(void)
{
    cout << "Name: "        << name        << endl;
    cout << "Employee ID: " << employee_id << endl;
    cout << "Salary: "      << salary      << endl;
};

int main(void)
{
    Employee Worker, Boss;

    strcpy(Worker.name, "John Doe");
    Worker.employee_id = 12345;
    Worker.salary = 25000.00;

    strcpy(Boss.name, "Happy Jamsa");
    Boss.employee_id = 101;
    Boss.salary = 101101.00;

    Worker.showEmployee();

    cout << endl;

    Boss.showEmployee();
}