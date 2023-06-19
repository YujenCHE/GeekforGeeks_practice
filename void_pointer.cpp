#include <stdlib.h>


int main()
{
    int x = 4;
    float y = 5.5;
    
    void* ptr;
    
    ptr = &x;
    
    printf("Integer variable is %d\n", *((int*)ptr));
    
    ptr = &y;
    printf("Float variable is %f\n", *((float*)ptr));//要用%f才是小數點
   
    return 0;
}

/***
 void pointer is a pointer that points to some data location in storage, which DON'T have a specific type.
 ***/
