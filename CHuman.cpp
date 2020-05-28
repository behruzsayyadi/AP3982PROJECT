#include "CHuman.h"

CHuman::CHuman()
: name(NULL) , age (0)
{}

CHuman::CHuman(int i,std::string s = "")
{
    age = i;
    name = s;
}

void CHuman::setName (const std::string name)
{
    this->name = name;
}

void CHuman::setAge (int age)
{
    this->age = age;
}
int CHuman::getAge ()
{
    return this->age;
}
const std::string CHuman::getName()
{
    return this->name;
}