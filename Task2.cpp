#include <iostream>

int no = 6;
namespace  my_namespace
{
    int no = 5;
}

int main()
{
    
    std::cout << no << std::endl;
    std::cout << my_namespace :: no;
}