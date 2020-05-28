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
    CHuman me;
    print(3);
    // cout << "Hello World!!" << endl;
    return 0;
}