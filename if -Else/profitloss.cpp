#include <iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp>cp) cout<<"Pofit is " <<sp-cp;
   else if(sp<cp) cout<<"Loss is" <<cp-sp;
    if(sp==cp) cout<<"NO profit, No loss";

}