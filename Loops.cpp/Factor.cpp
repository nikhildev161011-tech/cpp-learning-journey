#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            cout<<i<<" ";
       if(i!=num/i){cout<<num/i<<" ";
       }
        }
    }
}