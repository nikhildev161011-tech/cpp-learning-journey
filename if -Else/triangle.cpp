#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three side: ";
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a) cout<<"Triangle can be formed";
    else cout<<"Triangle cannot be formrd";
}

