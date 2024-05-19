#include<iostream>
using namespace std;

class student{
    string name;
    int roll;
    int marks[3];
    int sum=0;
float avg=0,percentage=0;
    public:
    static int count;
    void get(void){
        cout<<"enter the name of student "<<":"<<endl;
        cin>>name;
        cout<<"enter the roll number:"<<endl;
        cin>>roll;
        cout<<"enter the marks in three subjects: "<<endl;
        for(int i=0;i<3;i++){
            cin>>marks[i];
        }
        for(int i=0;i<3;i++){
            sum+=marks[i];
        }
        
    }
    void display(void){
        cout<<"Name :"<<name<<endl;
        cout<<"Roll Number: "<<roll<<endl;
        avg = sum/3.0;
        
        percentage= (sum /300.0)*100;
        cout<<"percentage is: "<<percentage<<endl;
    }
    void grade(void){
        if(percentage>=90){
            cout<<"A"<<endl;
            count++;
        }
        else if(percentage>=80 && percentage<90){
            cout<<"B"<<endl;
            count++;
        }
         else if(percentage>=70 && percentage<80){
            cout<<"C"<<endl;
            count++;
        }
         else if(percentage>=60 && percentage<70){
            cout<<"D"<<endl;
            count++;
        }
        else{
            cout<<"Average"<<endl;
        }
    }
};
int student::count;
int main(){
    int n;
    cout<<"enter the number of students:"<<endl;
    cin>>n;
    student one[n];
    for(int i=0;i<n;i++){
    one[i].get();
    one[i].display();
    one[i].grade();
    }
    return 0;
}