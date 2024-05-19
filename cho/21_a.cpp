#include<iostream>
using namespace std;
class base1{
    protected:
    int num1;
    public:
    void set1(int n){
        num1=n;
    }
};
class base2{
    protected:
    int num2;
    public:
    void set2(int n){
        num2=n;
    }
};
class base3{
    protected:
    int num3;
    public:
    void set3(int n){
        num3=n;
    }
};
class drived:public base1, public base2, public base3{
    public:
    void show(){
        cout<<"First Number: "<<num1<<endl;
        cout<<"Second Number: "<<num2<<endl;
        cout<<"Third Number: "<<num3<<endl;
        cout<<"Sum: "<<num1+num2+num3<<endl;
    }
};
int main(){
    drived happy;
    happy.set1(10);
    happy.set2(10);
    happy.set3(10);
    happy.show();
    return 0;
}