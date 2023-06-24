#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, x = 10;
    int *ptr = arr;
    
    cout << "arr[2] = " << arr[2] << endl;
    
    // arr 偏移 2 個整數位置 , 它會取得 arr[2] 的值
    cout << "*(arr + 2) = " << *(arr + 2) << endl;
    
    cout << "ptr[2] = " << ptr[2] << endl;
    
    //將指向陣列 arr 的指標 ptr 偏移 2 個整數位置，然後取得該位置的值
    cout << "*(ptr + 2) = " << *(ptr + 2) << endl;
    
    return 0;
}

//都是第三個元素 : 3
