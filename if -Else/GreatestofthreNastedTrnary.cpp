#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int greatest = (a>=b && a>=c) ? a : (b>=a && b>=c) ? b :c;
    cout<<greatest<<endl;
}