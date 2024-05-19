#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a > b && a >c){
        cout<<a<<" is greatest"<<endl;
        if(b > c){
            cout<<b<<" is second largest"<<endl;
            cout<<c<<" is smallest";
        }
        else{
            cout<<c<<" is second largest"<<endl;
            cout<<b<<" is smallest";
        }
    }
    if(b > a && b >c){
        cout<<b<<" is greatest"<<endl;
        if(a > c){
            cout<<a<<" is second largest"<<endl;
            cout<<c<<" is smallest";
        }
        else{
            cout<<c<<" is second largest"<<endl;
            cout<<a<<" is smallest";
        }
    }
    if(c > a && c >b){
        cout<<c<<" is greatest"<<endl;
        if(b > a){
            cout<<b<<" is second largest"<<endl;
            cout<<a<<" is smallest";
        }
        else{
            cout<<a<<" is second largest"<<endl;
            cout<<b<<" is smallest";
        }
    }
    return 0;
}