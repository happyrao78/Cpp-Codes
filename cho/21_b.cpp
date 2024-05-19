#include<iostream>
using namespace std;
class base{
    protected:
    int num1;
    public:
    void set1(int num1){
        this->num1=num1;
    }
};
class two:public base{
    protected:
    int num2;
    public:
    void set2(int num2){
        this->num2=num2;
    }
void display(){
    cout<<"First Number: "<<num1<<endl;
    cout<<"Second Number: "<<num2<<endl;
}
};
class three:public base{
    protected:
    int num3;
    public:
    void set3(int num3){
        this->num3=num3;
    }
    void  display(){
        cout<<"First Number: "<<num1<<endl;
        cout<<"Third Number: "<<num3<<endl;
    }
};
int main(){
    two obj;
    three obj2;
    obj.set1(10);
    obj.set2(20);
    obj.display();
    obj2.set1(30);
    obj2.set3(40);
    obj2.display();
    return 0;
}