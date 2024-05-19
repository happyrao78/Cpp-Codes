#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
    friend void calculateArea(rectangle r);
    void getData(){
        cout<<"Enter the length of the rectangle: ";
        cin>>length;
        cout<<"Enter the breadth of the rectangle: ";
        cin>>breadth;
    }
    void display(){
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
    }
};
void calculateArea(rectangle r){
    cout<<"Area of the rectangle: "<<r.length*r.breadth<<endl;
}
int main(){
    rectangle obj;
    obj.getData();
    obj.display();
    calculateArea(obj);
    return 0;
}