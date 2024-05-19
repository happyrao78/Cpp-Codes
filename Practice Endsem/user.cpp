#include<iostream>
using namespace std;
class user{
    int dd,mm,yy;
    public:
    user(int d, int m, int y){
        dd=d;
        mm=m;
        yy=y;
    }
    int operator ==(user obj){
        if(dd == obj.dd && mm == obj.mm && yy == obj.yy){
            return 1;
        }
        else{
            return 0;
        }
    }
    void show(){
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;   
    }
};
int main(){
    user d1(12,12,2023);
    user d2(13,9,2024);
    d1.show();
    d2.show();
    if(d1==d2){
        cout<<"same";
    }
    else{
        cout<<"not same";
    }
    return 0;
}