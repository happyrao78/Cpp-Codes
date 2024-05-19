#include<iostream>
using namespace std;
class vehicle{
    public:
     virtual void startengine(){
        cout<<"Vehicle engine started"<<endl;
    }
};
class car:public vehicle{
    public:
    void startengine(){
        cout<<"Car engine started"<<endl;
    }
};
int main(){
    vehicle *ptr;
    car obj;
    ptr=&obj;
    ptr->startengine();
    return 0;
}