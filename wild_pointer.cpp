#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int* ptr;//wild pointer
    
    int var = 90;
    
    ptr = &var;//not wild
    cout<<*ptr;
    
    return 0;
}
