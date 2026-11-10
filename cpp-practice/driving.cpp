#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age here: ";
    cin>>age;
    if(age<16)
    cout<<"you are not eligible for driving licence";
    else if(age>=16 && age<18)
    cout<<"You are eligibal for only lerner's licence";
    else
    cout<<"You are eligible for full driving licence";


}