#include <iostream>

using namespace std;

int main()
{
    char s[] = "1 true love";
    
    char* y = &s[0];//設一個指針y來儲存字元的地址
    
    while(*y != '\0'){//不斷重複直到遇到null字元
        cout<<*y;
        y++;
    }
    cout<<endl;
    return 0;
}
