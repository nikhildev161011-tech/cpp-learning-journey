//question: Take postive integer input and tell if is odd or even?//
#include <iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter a positive integer: ";
   cin>>num;
   if(num%2==0) cout<<"Even number"<<endl;
   else cout<<"Odd number"<<endl;
}