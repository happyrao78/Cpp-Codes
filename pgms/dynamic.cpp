#include<iostream>
using namespace std;
class dynamic{
    int size;
    int *p;
    public:
    dynamic(int s){
        size=s;
        p= new int[size];
    }
    void ip(){
        for(int i=0;i<size;i++){
            cin>>p[i];
        }
    }
    void op(){
        for(int i=0;i<size;i++){
            cout<<p[i]<<" ";
        }
    }
};
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    dynamic obj(size);
    obj.ip();
    obj.op();
    return 0;
}