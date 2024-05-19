//program that allows the user to keep entering number as long as input is valid and display a count of valid numbers entered by user using while loop, the number treat it valid when number is divisible by 8;
#include<iostream>
using namespace std;
int main(){
    int cont=1,n;
    while(cont==1){
        cout<<"enter a number:"<<endl;
        cin>>n;
        if(n%8==0){
            cout<<"valid"<<endl;
        }
        else{
            cout<<"not valid"<<endl;
            
        }
    
    cout<<"enter 0 to exit 1 to continue :";
    cin>>cont;
    }
    
    cout<<"thanks";
    return 0;
}