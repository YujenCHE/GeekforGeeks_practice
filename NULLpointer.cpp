#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int* ptr = (int *)malloc(sizeof(int));
    
    free(ptr);//ptr becomes dangling pointer
    
    ptr = NULL;
    
    return 0;
}
/***
 A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer. 
***/
