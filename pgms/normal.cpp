//write a menu driven program to find area of circle,rectangle and square#include<iostream>
#include<iostream>
using namespace std;
class room{
    int length, breadth, radius, side;
    public:
    void getData_rectangle(void){
        cout<<"enter the length"<<endl;
        cin>>length;
        cout<<"enter the breadth"<<endl;
        cin>>breadth;
    }
    
    int area_rectangle(){
        cout<<"area of rectangle: "<<length*breadth<<endl;
    }
    void getradius(void){
        cout<<"enter radius:"<<endl;
        cin>>radius;
    }
    int area_circle(){
        cout<<"area of circle: "<<3.14*radius*radius<<endl;
    }
    void getside(void){
        cout<<"enter side of square:"<<endl;
        cin>>side;
    }
    int area_square(){
        cout<<"area of square: "<<side*side<<endl;
    }
};
int main(){
    room data;
    int choice,count=1;
    while(count==1){
        cout<<"\nenter choice:\n 1.Rectangle area \n 2. Circle area \n 3. Square area\n"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            data.getData_rectangle();
            data.area_rectangle();
            break;

            case 2:
            data.getradius();
            data.area_circle();
            break;

            case 3:
            data.getside();
            data.area_square();
            break;
        }
        cout<<"enter 1 to continue 0 to exit:"<<endl;
        cin>>count;
    }
    cout<<"\n !!!thanks happy!!!"<<endl;
    
    return 0;
}