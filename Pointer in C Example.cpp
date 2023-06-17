#include <iostream>

using namespace std;

void Pointer()
{
    int var = 88;
    int *ptr;
    ptr = &var;
    printf("%x\n", *ptr);//*ptr 是指ptr的地址，變成十六進位的數字
    printf("%d\n", *ptr);//變成十進位
    printf("ptr = %p\n", ptr);//%p是地址的型態
    printf("var = %d\n", var);//變數的十進位
}

int main()
{
    Pointer();

    return 0;
}
