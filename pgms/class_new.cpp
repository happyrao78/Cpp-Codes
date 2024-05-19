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
};
int main(){
    int large=0;
    employee data[3];
    for(int i=0;i<3;i++){
        data[i].get();
        if(data[i].salary >large){
            large = data[i].salary;
        }
    }
    for(int i=0;i<3;i++){
        data[i].display();
    }
    cout<<large;


    
    return 0;
}