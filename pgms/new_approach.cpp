#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    int salary;
    
    void get(){
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enetr salary:"<<endl;
        cin>>salary;
    }
    void display(){
        cout<<name<<endl;
        cout<<salary<<endl;
    }
    void greatest(){
        if(employee one.salary > employee two.salary && employee one.salary > employee three.salary){
            cout<<employee  one.salary<<endl;
        }
    }
};
int main(){
  employee one,two,three;
one.display();
one.get();

    
    return 0;
}