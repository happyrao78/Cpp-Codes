//write a pgm that allows the user to input n numbers and find the number of positive numbers and the number of negative numbers using for loop;
#include<iostream>
using namespace std;
int main(){
    int n,num,countp=0,countn=0;
    cout<<"enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter numbers:"<<endl;
        cin>>num;
        if(num>0){
            countp++;
        }
        else{
            countn++;
        }
    }
    cout<<countp<<endl;
        cout<<countn<<endl;

    return 0;
}