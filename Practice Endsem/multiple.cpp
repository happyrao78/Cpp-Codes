#include<iostream>
using namespace std;
class student1{
    public:
    student1(){
        cout<<"happy yadav"<<endl;
    }
};
class student2{
    public:
    student2(){
        cout<<"bittu yadav"<<endl;
    }
};
class complete : public student1, public student2{

};
int main(){

complete obj;
return 0;
}
    
