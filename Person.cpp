#include "Person.h"

Person::Person()
{
    name = "";
    email = "";
}

Person::Person(std::string parName, std::string parEmail)
{
    name = parName;
    email = parEmail;
}

std::string Person::getName()
{
    return name;
}

std::string Person::getEmail()
{
    return email;
}
