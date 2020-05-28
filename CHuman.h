#pragma once
#include <iostream>
#include <string>

class CHuman
{
private:
    std::string name;
    int age;
    
public:
    CHuman();
    CHuman(int,std::string);
    int getAge();
    const std::string getName();
    void setName(const std::string);
    void setAge(int);
};
