#include <iostream>

using namespace std;

int main(){
    //用string
    string s = "happy birthday";
    string str = "happy anniversary";
    
    cout<<s<<endl;
    cout<<str<<endl;
    
    //用char
    char s1[] = {'h','b','h','a','\0'};
    char s2[5] = {'h','b','h','a','\0'}; 
    //因為[]裡面的數字是可以存多少字元的意思，所以[]內只要比5大就好(加\0總共5個字元)
    char s3[5] = "hbha";
    char s4[] = "hbha";
    
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    
    return 0;
}
