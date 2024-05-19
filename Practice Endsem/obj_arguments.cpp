#include<iostream>
using namespace std;
class time{
    int hour;
    int minutes;
    public:
    void get(int hour,int minutes){
        this->hour=hour;
        this->minutes=minutes;
    }
    void show(){
        cout<<"Time is: "<<hour<<":"<<minutes<<endl;
    
    }
    void  sum(time t1, time t2){
        minutes=t1.minutes+t2.minutes;
        hour=minutes/60;
        minutes=minutes%60;
        hour= hour+ t1.hour+t2.hour;
    }
};
int main(){
    time t1,t2,t3;
    t1.get(2,45);
    t2.get(3,30);
    t3.sum(t1,t2);
    t1.show();
    t2.show();
    t3.show();
    return 0;
}