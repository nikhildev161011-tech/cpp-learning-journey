#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x and y cordinates: ";
    cin>>x>>y;
    if(x==0 && y==0) cout<<"Origin";
    else if(y==0) cout<<"x axis";
    else if(x==0) cout<<"y axis";
    else if(x>0 && y>0) 
    cout<<"1st quadrant";
    else if(x<0 && y>0) 
    cout<<"2nd quadrant";
    else if(x<0 && y<0)
     cout<<"3rd quadrant";
    else
     cout<<"4th quadrant";
}