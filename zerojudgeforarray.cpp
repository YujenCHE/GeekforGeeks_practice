#include <iostream>

using namespace std;

int main()
{
    int n,i,num = 0;
    while(cin >> n && n != 0){
        
        if(n==1){//用字母
            int a[5] = {4,8,7,6,3};
            string s[5] = {"Medium Wac","WChicken Nugget","Geez Burger","ButtMilk Crispy Chicken","Plastic Toy"};//要加""
            int i;
            cin>>i;
            cout<<s[i-1]<<" "<<a[i=1]<<endl;
            num+=a[i-1];
        }
        
        else{
            int a[5] = {2,3,5,7};
            string s[5] = {"German Fries","Durian Slices","WcFurry","Chocolate Sunday"};//要加""
            int i;
            cin>>i;
            cout<<s[i-1]<<" "<<a[i=1]<<endl;
            num+=a[i-1];
        }
        
    }
    
    cout<<"total : "<<num<<endl;
    return 0;
    
}
