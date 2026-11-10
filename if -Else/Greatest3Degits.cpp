#include <iostream >
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter number: ";
    cin>>a>>b>>c;
    if(a>=b && a>=c) cout<<a<<" is greatest";
   else if (a<=b && b>=c) cout<<b<<" is greatest";
    else cout<<c<<"  is greatest";
}