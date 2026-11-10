#include <iostream>
#include <climits>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    if(x>=1000 && x<=9999) cout<<"Yes this is four digit number";
    else cout<<"This is Not four digit number";
}