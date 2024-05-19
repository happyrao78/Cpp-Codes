#include<iostream>
using namespace std;
class base{
    public:
    base(){
    cout<<"this is base class"<<endl;
    }
};
class derived1:public base{
    public:
    derived1(){
    cout<<"this is derived1 class"<<endl;
    }
};
class derived2:public base{
    public:
    derived2(){
    cout<<"this is derived2 class"<<endl;
    }
};
class derived3:public derived2,public derived1
{
    public:
    derived3(){
    cout<<"this is derived3 class"<<endl;
    }
};
int main(){
    derived3 obj;
    return 0;
}