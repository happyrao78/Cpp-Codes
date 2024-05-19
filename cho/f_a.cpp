#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int a=0;
    cout<<a<<endl;
    int b=1;
    cout<<b<<endl;
    for(int i=0;i<n-2;i++){
        int sum = a+b;
            cout<<sum<<endl;
        a=b;
        b=sum;
        
    }
    return 0;
}
