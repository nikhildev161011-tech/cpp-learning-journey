#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    cout<<fact;
}