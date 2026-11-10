#include <iostream>
using namespace std;
int main(){
    int choice;
    int storePin = 161011;
    float balance = 1600.75; 
    do {
        cout<<"UNION BANK (UB)"<<endl;

        cout<< "1. Deposite Money"<<endl;
        cout<< "2. Withdraw Money"<<endl;
        cout<< "3. Check your balance"<<endl;
        cout<< "4. Change your pin"<<endl;
        cout<< "5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
            case 1:{
            float amount;
            cout<<"Dear customre please enter amount to deposite: ";
            cin>>amount;
            balance=(balance+amount);
            cout<<"Dear customre your amount is successfuly deposited !";
            cout<<"Your Current Balance: "<<balance<<endl;
            break;
        }
            case 2:{
            float amount;
            cout<<"dear customre please enter amount to withdraw: ";
            cin>>amount;
            if(amount<=balance) {
                balance=(balance-amount);
                cout<<"Dear customre your amount is suceessfuly withdrwa !"<<endl;
                cout<<"Your current Balance is: "<<balance;
            }
            else{
                cout<<"Insufficient balance! Dear customre you don't have enough money ";
            }
            break;
        }
            case 3:{
            cout<<"Dear customr your balance"<<balance;
            break;
            }
            case 4:{
            int enteredPin;
            int newPin;
            cout<<"Dear customr please enter your old pin: ";
            cin>>enteredPin;
            if(storePin == enteredPin){
                cout<<" Dear customr old pin verified !"<<endl;  
                cout<<"Dear customr please enter your 4 digit new pin: "; 
                cin>>newPin;
                if(newPin>=1000 && newPin<=9999){
                    storePin=newPin;// ye krne se new pin storepin me update hoo jaayega.
                    cout<<"Dear customr your pin is succesfully changed !"<<endl;
                }   
                else {
                cout<<"Dear customr Invalid PIN please enter exactly a 4 digit number"<<endl;
                 break;
                
            }  
            
            }       
            }
            case 5:{
            cout<<"Dear customr Thankyou have a wonder full day";
            break; 
            } 
            default: {
                cout<<"Dear customr Inavilid choice ! please enter valid keyword";
                break;
            }
        }
    } while (choice != 5);

    }



