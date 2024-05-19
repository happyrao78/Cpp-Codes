//write a program to perform unary operator overloading
#include<iostream>
using namespace std;
class unar{
    int a;
    int b;
    public:
    void get(){
        a=30;
        b=40;
    }
    int operator ++(){
        a = ++a;
        b = ++b;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }

};
int main(){
    unar obj1;
    unar obj2;
    obj1.get();
    obj2.get();
    ++obj1;
    obj1.display();
    ++obj2;
    obj2.display();
    return 0;
}