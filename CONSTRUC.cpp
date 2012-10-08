#include <iostream>
#include <string.h>

class employee
{
public:
         employee(char *,
                  long,
                  float);
         employee(char *,
                  long);
    void show_employee(void);
    int  change_salary(float);
    long get_id(void);
         ~employee(void);
private:
    char  name[64];
    long  employee_id;
    float salary;
};

employee::~employee(void)
{
  std::cout << "Destroy object for " << name << std::endl;
}

employee::employee(char  *name,
                   long  employee_id,
                   float salary)
{
    strcpy(employee::name,
                     name);

    employee::employee_id = employee_id;

    if(salary < 50000.0)
        employee::salary  = salary;
    else
        employee::salary  = 0.0;
}

employee::employee(char *name, 
                   long employee_id)

{ 
    strcpy(employee::name,
                     name); 

    employee::employee_id = employee_id; 
    
    do
    { 
       std::cout << "Input salary for " << name << " less than $50000: "; 
       std::cin  >> employee::salary; 
    } 
    while (salary >= 50000.0); 
}

void employee::show_employee(void)
{
    std::cout << "Employee: "          << name        << std::endl;
    std::cout << "Employee's ID: "     << employee_id << std::endl;
    std::cout << "Employee's salary: " << salary      << std::endl;
}

int main(void)
{
    employee worker("Happy Jamsa", 
                    101);
    employee manager("Jane Doe", 102, 50000.0);

    worker.show_employee();
    manager.show_employee();
}