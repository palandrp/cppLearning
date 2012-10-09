#include <iostream>
#include <string.h>

using namespace std;

class employee
{
public:
    employee(char *,
             char *,
             float);
    ~employee(void);

    void show_employee(void);

private:
    char  name[64];
    char  position[64];
    float salary;
};

employee::employee(char *name,
                   char *position,
                   float salary)
{
    strcpy(employee::name,
           name);

    strcpy(employee::position,
           position);

    employee::salary = salary;
}

employee::~employee(void)
{
    cout << "Object employee destroed." << endl;
}

void employee::show_employee(void)
{
    cout << "Name: "     << name     << endl;
    cout << "Position: " << position << endl;
    cout << "Salary: $"  << salary   << endl;
}

class manager : public employee
{
public:
    manager(char *,
            char *,
            char *,
            float,
            float,
            int);
    ~manager(void);

    void show_manager(void);

private:
    float annual_bonus;
    char  company_car[64];
    int   stock_options;
};

manager::manager(char *name,
                 char *position,
                 char *company_car,
                 float salary,
                 float bonus,
                 int stock_options)
: employee(name,
           position,
           salary)
{
    strcpy(manager::company_car,
           company_car);

    manager::annual_bonus  = bonus;

    manager::stock_options = stock_options;
}

manager::~manager(void)
{
    cout << "Object manager destroed." << endl;
}

void manager::show_manager(void)
{
    show_employee();
    cout << "Company car: "   << company_car   << endl;
    cout << "Annual bonus: $" << annual_bonus  << endl;
    cout << "Stock options: " << stock_options << endl;
}

int main(void)
{
    employee worker("Djon Doy", 
                    "Programmer", 
                    35000.0);

    manager boss("Djein Doy", 
                 "President", 
                 "Lexus", 
                 50000.0, 
                 5000, 
                 1000);

    worker.show_employee();
    boss.show_manager();
}