#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int secretNumber=(rand()%100)+1; 
    int attempts =0;
    int userGuess;
    for(int attempts=1; ;attempts++){
     cout<<"Enter your guess (between 1 to 100): ";
    cin>>userGuess;
    if(userGuess<secretNumber){
       cout<<"TOO low! try a larger number";     
    }
    else if(userGuess>secretNumber){
        cout<<"TOO high! try a smaller number";
    }
    else{
        cout<<"Heyy you won"<<endl;
        cout<<secretNumber;
        break;       
    }
}
}
