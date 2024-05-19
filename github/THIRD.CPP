/*
TASK 2:
In this code I have used three main concepts of operator overloading:
1. Binary operator overloading using Friend Function 
2. Usind constructors to initialize the values of the objects
3. Using this operator to point to the current object


NAME: HAPPY YADAV
CLASS: BCA-2C1
ROLL NO: 2310997091


*/
#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(int real, int img){
        this->real = real;
        this->img = img;
    }
    
     friend complex operator+( complex c1,  complex c2);
     void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
     }
     
};
complex operator+( complex  c1, complex c2){
    return complex(c1.real+c2.real, c1.img+c2.img);
}



int main(){
    complex c1(101,25);
    complex c2(156,27);
    complex result = c1+c2;
    result.display();
    return 0;
}