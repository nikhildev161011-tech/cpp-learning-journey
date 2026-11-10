#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your Number: ";
    cin>>marks;
    if(marks>=90)
    cout<<"A Grade";
    else if(marks>=80)
    cout<<"B Grade";
    else if(marks>=70)
    cout<<"C Grade";
    else if(marks>=60)
    cout<<"D Grade";
    else if(marks>=50)
    cout<< "E GRADE";
    else
    cout<<"F Fail";
    
}