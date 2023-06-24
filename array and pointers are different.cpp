#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    
    // sizof(int) * (number of element in arr[]) is printed ==> ??
    cout << "The size of array is " << sizeof(arr)<<endl;
    
    // sizeof a pointer is printed which is same for all ==>??
    // type of pointers (char *, void *, etc)    
    cout << "However, the size of pointer is " << sizeof(ptr) << endl;
    
    return 0;
}
