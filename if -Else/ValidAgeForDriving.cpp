//Qustion: Write a c++ program to check wether a person is eligible for driving or not?//
#include <iostream>
   using namespace std;
   int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){cout<<"you are eligible for driving"<<endl;
      cout<<"But you need driving license";
    }
    else cout<<"you are not eligible for driving"<<endl;
   }