#include<iostream>
using namespace std;
class Time{
    int hours,mins;
    public:
    Time(int m){
        hours = m/60;
        mins = m%60;
    }
    void show(){
        cout<<hours<<" hours and "<<mins<<" minutes"<<endl;
    }
};
int main(){
    int minutes=90;
    Time t1;
    t1=minutes;
     t1(90);
    t1.show();//use constructor with one parameter
    return 0;
}