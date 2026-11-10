#include <iostream>
using namespace std;
int main(){
    int w;
    cout<<"Enter a Number: ";
    cin>>w;
    if(w==1)
    cout<<"Monday"<<endl;
    else if(w==2)
    cout<<"Tuesday"<<endl;
    else if(w==3)
    cout<<"Wednsday"<<endl;
    else if(w==4)
    cout<<"Thursday"<<endl;
    else if(w==5)
    cout<<"Friday"<<endl;
    else if(w==6)
    cout<<"Saturday"<<endl;
    else if (w==7)
    cout<<"Sunday"<<endl;
    else
    cout<<"Invalid Number";
}