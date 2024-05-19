#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a decimal number:";
    cin>>number;
    int i=0;
    int ld=0;
    int rev=0;
    while(number!=0){
        ld = number%2;
        rev = (rev*10) + ld;
        number /= 2;
        i++;
    }
    cout<<"Binary :"<<rev;
    return 0;
}