#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    
    // sizof(int) * (number of element in arr[]) is printed ==> ??
    //陣列的大小 = 4 bytes * 5個元素 
    cout << "The size of array is " << sizeof(arr)<<endl;
    
    // sizeof a pointer is printed which is same for all
    // ==> GDT "指標的大小在大多數系統中是固定的，通常為 4 或 8 個位元組，不論指標所指向的型別是什麼。"
    // type of pointers (char *, void *, etc)    
    cout << "However, the size of pointer is " << sizeof(ptr) << endl;
    
    return 0;
}
