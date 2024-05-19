#include<iostream>
using namespace std;
class student{
    string name;
int age;
public:
void getdata(string name,int age){
    this->name=name;
    this->age=age;
}
void display(){
    // this->getdata();
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
};

int main(){
    student obj;
    obj.getdata("Happy",20);
    obj.display();
    return 0;
}