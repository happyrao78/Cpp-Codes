#include<iostream>
using namespace std;
main(){
    int a,choice,cont=1;
    while(cont==1){
    cout<<"Menu Program:\n 1.Odd / Even \n 2. Prime / Composite / NOT \n Enter the option:\n";
    cin>>choice;
     cout<<" enter a number:";
    cin>>a;
    if(choice==1){
    if(a%2==0){
        cout<<" even number.";
    }
    else{
        cout<<"odd number.";
    }
    }
    else{
    int check=0;
    for(int i=2;i<=a-1;i++){
        if(a%i==0){
            check=1;
            break;
        }
    }
    if(a==0 || a==1) {
        cout<<"not prime not composite";
        }

    else if(check==1){ 
        cout<<"composite";
        }
    else{
            cout<<"prime";
        }
}
 cout<<"\nenter 1 for yes or any other number for no : \n";
cin>>cont;

    }
    cout<<"\nThanks.";
    
    return 0;
}