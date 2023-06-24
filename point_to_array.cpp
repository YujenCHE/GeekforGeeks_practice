#include <iostream>

using namespace std;

int point(int ptr[])
{
    int x = 10;
    
    cout << "Size of ptr is " << (int)sizeof(*ptr) <<endl;
    
    ptr = &x;
    
    cout << "*ptr = " <<*ptr;
    
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    cout << "Size of array is " << (int)sizeof(arr) <<endl;
    
    point(arr);

    
    return 0;
}
