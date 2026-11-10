#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter positive integer number: ";
    cin>>num;
   if(num%5==0 && num%3==0) cout<<"Anuj";
   else if(num%5==0) cout<<"Kartikey";
   else if(num%3==0) cout<<"Sakshi";
   else cout<<"Hitesh";
}