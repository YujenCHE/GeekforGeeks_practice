#include <iostream>
#include <cstdlib>


int* func()
{
    int x = 5;
    return &x;
}

int main()
{
    int *ptr = func();
    fflush(stdin);//to FLUSH the output buffer and move the buffered data to console or disk 
    
    std::cout<< *ptr;
    
    return 0;
}
