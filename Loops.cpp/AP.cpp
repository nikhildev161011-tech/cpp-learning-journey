#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number of terms: ";
    cin>>num;
  /* for(int i=2; i<=3*num-1; i+=3){
    cout<<i<<" ";
   }*/


   int a=2, d=3;
   for(int i=1; i<=num; i++){
   cout<<a<<" ";
   a +=d;
   }
}