#include <iostream>
#include "Person.h"
#include "Employee.h"

int main()
{
    Person person("pammi patel", "pammi@exammple.com");
    Employee employee("Denis patel", "denis@example.com", 5000.0);

    std::cout << "Person Name: " << person.getName() << std::endl;
    std::cout << "Person Email: " << person.getEmail() << std::endl;

    std::cout << "Employee Name: " << employee.getName() << std::endl;
    std::cout << "Employee Email: " << employee.getEmail() << std::endl;
    std::cout << "Employee Salary: " << employee.getSalary() << std::endl;

    return 0;
}
