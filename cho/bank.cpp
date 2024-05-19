#include<iostream>
using namespace std;
class bank{
    string name;
    int ac;
    string type;
    int balance;
    public:
    void assign(){
        float initial;
        cout<<"You have to keep rs. 500 minimum in bank to keep it active.\n"
        <<"Would you like to open the account ?\n"
        <<"Yes(1) or No(0) : \n";
        int test;
        cin>>test;
        if(test==1){
            initial=500;
            balance=initial;
            cout<<"Enter your name : ";
            cin>>name;
            cout<<"Enter your account number : ";
            cin>>ac;
            cout<<"Enter the type of account : ";
            cin>>type;
            cout<<"Your account has been created successfully.\n";
        }
        else{
            cout<<"Okay account creation cancelled.\n";
        }
    }
    void deposit(){
        int amount;
        cout<<"Enter the amount you want to deposit : ";
        cin>>amount;
        balance+=amount;
        cout<<"Amount deposited successfully.\n";
    }
    void withdraw(){
        int amount;
        cout<<"enter the amount you want to withdraw : ";
        cin>>amount;
        if(amount < balance){
        balance-=amount;
        cout<<"Amount withdrawn successfully.\n";
        cout<<"Your current balance is : "<<balance<<endl;
        }
        else{
            cout<<"Insufficient balance.\n";
        }
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Account number : "<<ac<<endl;
        cout<<"Type of account : "<<type<<endl;
        cout<<"Balance : "<<balance<<endl;
}
};
int main(){
    bank user;
    int cont=0,choice;
    while(cont==0){
        cout<<"1. Create account\n"
        <<"2. Deposit\n"
        <<"3. Withdraw\n"
        <<"4. Display\n"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            user.assign();
            break;
            case 2:
            user.deposit();
            break;
            case 3:
            user.withdraw();
            break;
            case 4:
            user.display();
            break;
            default:
            cout<<"Invalid choice.\n";
        }
        cout<<"Do you want to continue ?\n";
        cin>>cont;
    }
    cout<<"Thank you for using our services.\n";
    return 0;
}