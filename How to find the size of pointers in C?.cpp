#include <iostream>

using namespace std;

struct str{
};

void func(int a, int b){};

int main()
{
    int a = 10;
    char c = 'G';
    struct str X;
    
    int *ptr_int = &a; //整數的
    char *ptr_char = &c;//字元的
    struct str *ptr_str = &X;//結構的
    void (*ptr_func)(int,int) = &func;//函式的
    void *ptr_empty = NULL;//空的
    
    printf("The size of integar pointer is \t:\t%d bytes\n", sizeof(ptr_int));
    printf("The size of character pointer is \t:\t%d bytes\n", sizeof(ptr_char));
    printf("The size of structure pointer is \t:\t%d bytes\n", sizeof(ptr_str));
    printf("The size of function pointer is \t:\t%d bytes\n", sizeof(ptr_func));
    printf("The size of NULL pointer is \t:\t%d bytes\n", sizeof(ptr_empty));
    
    return 0;
    
    //\t是空格
}
