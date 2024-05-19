#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(int real,int img){
        this->real=real;
        this->img=img;
    }
    // }
    // friend complex operator +(complex c1, complex c2){
    //     return complex(c1.real+c2.real,c1.img+c2.img);
    // }
    complex operator +(complex &obj){
        return complex(real+obj.real,img+obj.img);
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    complex c1(10,20);
    complex c2(30,40);
    complex c3=c1+c2;
    c3.display();
    return 0;
}