#include <iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter number: ";
    cin>>num;
    if(num==(int)num) cout<<"This number is integer: ";
    else cout<<"This number is not integer: ";
}