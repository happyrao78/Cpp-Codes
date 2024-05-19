#include<iostream>
using namespace std;
class room{
    int length, breadth,height;
    public:
    
    void getData(void){
        cout<<"enter the length"<<endl;
        cin>>length;
        cout<<"enter the breadth"<<endl;
        cin>>breadth;
        cout<<"enter the height"<<endl;
        cin>>height;
    }
    
    void setData(void){
        cout<<"The Length of the Room is : "<<length<<"\n";
        cout<<"The Breadth of the Room is : "<<breadth<<"\n";
                cout<<"The Height of the Room is : "<<height<<"\n";

    }
    int perimeter(){
        cout<<"perimeter is: "<<2*(length+breadth)<<endl;
    }
    int area(){
        cout<<"area: "<<length*breadth<<endl;
    }
    int volume(){
        cout<<"volume:"<<length*breadth*height<<endl;
    }
};
int main(){
    int n;
    cout<<"enter the number of objects:"<<endl;
    cin>>n;
    room obj[n];
    for(int i=0;i<n;i++){
    obj[i].getData();
    obj[i].setData();
    obj[i].perimeter();
    obj[i].area();
    obj[i].volume();
    }
    
    return 0;
}