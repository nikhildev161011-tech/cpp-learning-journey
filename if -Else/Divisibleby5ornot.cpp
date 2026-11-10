//Question: take a positive integer input and tell if it is devisible by 5 or not? //
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num%5==0) cout<<"The number is divisible by 5"<<endl;
    else cout<<"The number is not divisible by 5"<<endl;
}