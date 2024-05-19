#include<iostream>
#include<string.h>
using namespace std;

class employee{
    string name;
    string residence;
    string designation;
    int salary;
    long long int phone;
    static int count;
    static int count2;
    public:
    void countt(){
        if(name.at(0)=='n'){
            count++;
        }
        
        cout<<"employees name starting with n: "<<count<<endl;
        if(salary > 12000){
            count2++;
        }
         cout<<"Number of employees whose salary is greator than 12000: "<<count2<<endl;
    }

    void get(){
        cout<<"Enter employee name: "<<endl;
        cin>>name;
        cout<<"Enter residence: "<<endl;
        cin>>residence;
        cout<<"Enter designation: "<<endl;
        cin>>designation;
        cout<<"Enter salary: "<<endl;
        cin>>salary;
        cout<<"Enter 10 digit phone number: "<<endl;
        cin>>phone;
    }
    void display(){
        if(designation=="manager"){
            cout<<"Name: "<<name<<endl;
            cout<<"Residence: "<<residence<<endl;
            cout<<"Designation: "<<designation<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Phone: "<<phone<<endl;
        }
        if(residence=="chandigarh"){
            cout<<"Name: "<<name<<endl;
            cout<<"Residence: "<<residence<<endl;
            cout<<"Designation: "<<designation<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Phone: "<<phone<<endl;
        }
    }
    void display2(){
        // display();
        cout<<"Name: "<<name<<endl;
            cout<<"Residence: "<<residence<<endl;
            cout<<"Designation: "<<designation<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Phone: "<<phone<<endl;
            countt();

    }
};
int employee::count=0;
int employee::count2=0;
int main(){
    employee obj[2];
    for(int i=0;i<2;i++){
        obj[i].get();
        obj[i].display2();
    }

    return 0;
}