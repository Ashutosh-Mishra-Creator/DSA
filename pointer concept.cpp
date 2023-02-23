#include <stdio.h>
#include <iostream>

int main()
{
    int i = 6;
    int *a = &i;
    std::cout<<a<<"\n";
    std::cout<<*a;
    

    return 0;
}
