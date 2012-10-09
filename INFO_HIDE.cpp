#include <iostream>
#include <string.h>

using namespace std;

int strlen(char *str)
{
    int length;

    while(*str)
    {
        *str++;
        length++;
    }

    return length;
}

class Employee
{
public:
    int  assignValues(char *,
                      long,
                      float);
    void showEmployee(void);
    int  changeSalary(float);
    long getID(void);
private:
    char  name[64];
    long  employee_id;
    float salary;
};

int Employee::assignValues(char *emp_name,
                           long emp_id,
                           float emp_salary)
{
    if(strlen(emp_name) < 64)
    {
        strcpy(name, 
               emp_name);
    }
    else
    {
        cout << strlen(emp_name) << endl;
        cout << "Name can not contain more than 64 characters.";
        cout << endl;
        return -1;
    }
    
    employee_id = emp_id;

    if(emp_salary <= 50000.00)
    {
        salary = emp_salary;
    }
    else
    {
        cout << "Salary more than 50'000$, need additional resolution.";
        cout << endl;
        return -1;
    }

    return 0;
}

void Employee::showEmployee(void)
{
    cout << "Employee: "    << name         << endl;
    cout << "Employee ID: " << employee_id  << endl;
    cout << "Salary: "      << salary       << endl;
}

int Employee::changeSalary(float new_salary)
{
    if(new_salary <= 50000.00)
    {
        salary = new_salary;
        return 0;
    }
    else
    {
        cout << "Salary are not valid.";
        cout << endl;
        return -1;
    }
}

long Employee::getID(void)
{
    return(employee_id);
}

int main(void)
{
    for(;;)
    {
        char  emp_name[]    = {0};
        long  emp_id        = 0;
        float emp_scaalary    = 0.0;

        cout << "Name: ";
        cin  >> emp_name;
        cout << endl;

        cout << "ID: ";
        cin  >> emp_id;
        cout << endl;

        cout << "Salary: ";
        cin  >> emp_salary;
        cout << endl;

        Employee Worker;

        if(Worker.assignValues(emp_name,
                               emp_id,
                               emp_salary) == 0)
        {
            cout << "Employee gets next values: " << endl;
            Worker.showEmployee();
        }
        else
            cout << "Error" << endl;
    }
}