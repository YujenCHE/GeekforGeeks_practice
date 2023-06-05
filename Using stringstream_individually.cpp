#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string s = "1 true love";
    stringstream obj(s);//store string individually
    string temp;
    while (obj>>temp){ //obj存到temp
        cout<<temp<<endl;
    }
    return 0;
}
