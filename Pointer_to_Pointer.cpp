#include <iostream>

using namespace std;

int main()
{
    int var = 10;
    int* ptr1;
    int** ptr2;
    
    ptr1 = &var;
    ptr2 = &ptr1;
    
    printf("The value of variable is %d\n", var);
    printf("The value of var using 1 pointer is %d\n", *ptr1);
    printf("The value of var using double pointer is %d\n", **ptr2);

    return 0;
}
