#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, x = 10;
    
    int *ptr = &x;  // OK
    arr = &x;      //  NO

    
    return 0;
}
