#include <iostream>
using namespace std;
#include "CHuman.h"

void print (CHuman a)
{
    std::cout << "name is :" << a.getName() << "\t age:" << a.getAge() << std::endl; 
    return;
}
int main ()
{
    CHuman me (20,"behruz");
    print(me);
    // cout << "Hello World!!" << endl;
    return 0;
}