#include<iostream>
using namespace std;
class unary{
    int a,b,c;
    public:
    void get(int x, int y, int z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    
    }
    // void operator -(){
    //     a=-a;
    //     b=-b;
    //     c=-c;
    // }
    friend void operator -(unary &obj){
        obj.a=-obj.a;
        obj.b=-obj.b;
        obj.c=-obj.c;
    }
};
int main(){
    unary obj;
    obj.get(10,-20,30);
    obj.display();
    -obj;
    obj.display();
    return 0;
}