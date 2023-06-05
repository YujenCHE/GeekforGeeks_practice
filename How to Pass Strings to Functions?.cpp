#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void PrintString(string s){//()裡要有string s
    cout<<"Passed String : "<<s<<endl;
    return;//要回傳
}

int main(){
    string str = "1 true love";
    PrintString(str);
    return 0;
}
