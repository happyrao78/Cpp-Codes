#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number:";
    cin>>number;
    int ld=0;
    int sum=0;
    while(number!=0){
        ld = number%10;// to get the last digit of number
        sum += ld;//perform addition
        number/=10;//switch to next no.
    }
    cout<<"Sum of digits of entered number is : "<<sum;
    return 0;
}