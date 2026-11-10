#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 positive integers numbers: ";
    cin>>a>>b>>c;
    if(a<=b && a<=c) cout<<a<<" is smaller number";
    else if (a>=b && c>=b) cout<<b<<" is smaller number";
    else cout<<c<<" is smaller number";
}