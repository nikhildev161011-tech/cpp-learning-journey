#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 digit number: ";
    cin>>a>>b>>c;
    if(a<=b){
        if(a<=c) 
        cout<<a<<" is smallest";
        else 
        cout<<c<<" is smallest";
    }
    else{
    if(b<=c) 
    cout<<b<<" is smallest";
    else 
    cout<<c<<" is smallest";
    }
}