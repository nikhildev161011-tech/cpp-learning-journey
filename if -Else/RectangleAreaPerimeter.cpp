#include <iostream>
using namespace std;
int main(){
    float length,breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    float area = length*breadth;
    float preimeter = 2*(length+breadth);
    if(area>preimeter) cout<<"Area is greater";
    else cout<<"Area is not greater";
}