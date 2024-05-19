#include<iostream>
using namespace std;
class dost{
    int a;
    int b;
    public:
    void set(){
     a=5;
     b=10;
    }
    friend float mean(dost obj);
};
float mean(dost obj){
    return float(obj.a+obj.b)/2.0;
}
int main(){
    dost obj;
    obj.set();
    cout<<mean(obj);
    return 0;
}