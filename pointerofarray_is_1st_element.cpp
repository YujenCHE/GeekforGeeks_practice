#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, x = 10;
    int *ptr = arr;
    
    //會出現陣列第一個元素
    cout << "The value of 1st element is " << *ptr;//要星星*
    
    return 0;
}
