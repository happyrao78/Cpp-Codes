#include<iostream>
using namespace std;
class shape{
    int length, breadth, radius, side;
    public:
    void rectangle(void);
    void circle(void);
    void square(void);
};
void shape::rectangle(void){
     cout<<"enter length and breadth:"<<endl;
        cin>>length>>breadth;
        cout<<"Perimeter of rectangle is: "<<2*(length+breadth)<<endl;
        cout<<"Area of rectangle is:"<<length*breadth<<endl;
}
void shape::circle(void){
     cout<<"enter radius of circle:"<<endl;
        cin>>radius;
        cout<<"circumference of circle is: "<<2*3.14*radius<<endl;
        cout<<"Area of circle is:"<<radius*radius<<endl;
}
void shape::square(void){
     cout<<"enter the side of square"<<endl;
        cin>>side;
        cout<<"Perimeter of square is: "<<4*side<<endl;
        cout<<"Area of square is:"<<side*side<<endl;
}
int main(){
    shape obj;
    int cont=1,choice=0;
    while(cont==1){
        cout<<"Menu driven\n 1. rectangle \n 2.circle \n 3.square \n enter the choice:"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            obj.rectangle();
            break;
             case 2:
            obj.circle();
            break;
             case 3:
            obj.square();
            break;
        }
        cout<<"enter 1 to continue or 0 to exit"<<endl;
        cin>>cont;
    }
    cout<<"thankyou"<<endl;
    
    return 0;
}