#include<iostream>
using namespace std;
class number{
    static int staticCount;
    int nonStaticCount;
    public:
    void get();
    void display();
    void increment();
    void display_2();
};
int number::staticCount=0;
 void number::get(){
    cout<<"Enter the value of nonStaticCount: ";
    cin>>nonStaticCount;
}
 void number::display(){
    cout<<"static value before increment: "<<staticCount<<endl;
    cout<<"non static value before increment: "<<nonStaticCount<<endl;
    
}
void number::display_2(){
     cout<<"static value after increment: "<<staticCount<<endl;
    cout<<"non static value after increment: "<<nonStaticCount<<endl;
}
void number::increment(){
    staticCount++;
    nonStaticCount++;
}

int main(){
    number obj[5];
    for(int i=0;i<5;i++){
        obj[i].get();
        obj[i].display();
        obj[i].increment();
        obj[i].display_2();
    }
    return 0;
}