#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person
{
private:
    static int next_id;    
    double salary;

public:
    Employee();
    Employee(std::string name, std::string email, double paraSalary);
    int getId();
    double getSalary();
};

#endif
