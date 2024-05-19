#include<iostream>
using namespace std;
class a{
    public:
    virtual void display()=0;//pure virtual function
};
class b: public a{
    public:
    void display(){
        cout<<"derived class"<<endl;
    }
};
int main(){
    a *ptr;
    b obj;
    ptr =&obj;
    ptr->display();
    return 0;
}