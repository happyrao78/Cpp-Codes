#include<iostream>
using namespace std;
class student{
    int salary=500;
    public:
    student(){
        cout<<salary<<endl;
    }
};
class dericed:public student{
    // public:
    // void display(){
    //     cout<<salary<<endl;
    // }
};
int main(){
    dericed obj;
    // obj.display();
    return 0;
}