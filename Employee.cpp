#include "Employee.h"

int Employee::next_id = 0;   

Employee::Employee() : Person("EmptyName", "EmptyEmail")
{
    salary = -1;
}

Employee::Employee(std::string name, std::string email, double paraSalary) : Person(name, email)
{
    salary = paraSalary;
}

int Employee::getId()
{
    return next_id++;
}

double Employee::getSalary()
{
    return salary;
}
