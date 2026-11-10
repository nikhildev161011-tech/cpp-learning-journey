#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
  /* ((num%2==0) ? cout<<"Even Number" : cout<<"Odd Number");*/
   cout<<((num%2==0) ? "Even Number" : "Odd Number");
}