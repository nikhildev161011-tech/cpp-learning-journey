#include <iostream>
using namespace std;
int main(){
 int num ;
  int count = 0;
 cout<<"Enter a Number: ";
 cin>>num;

 while(num>0){
    num/=10;
    count++;
    if(num == 0){ count=1;
    }
 }
 cout<<count;
}