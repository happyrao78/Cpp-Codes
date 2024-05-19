/* take input
name:
roll :
marks(3):
class:
and display the students values:
*/
#include<iostream>
using namespace std;
int main(){
    int marks[3],cls,roll;
    char name[20];
    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"Enter roll no."<<endl;
    cin>>roll;
    cout<<"enter class:"<<endl;
    cin>>cls;
    cout<<"enter marks in hindi english & maths:"<<endl;
    for(int i=0;i<3;i++){
        cin>>marks[i];
    }
    //displaying student's details
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No.: "<<roll<<endl;
    cout<<"Class: "<<cls<<endl;
    cout<<"Marks in Hindi English & Maths are: "<<endl;
    for(int i=0;i<3;i++){
        cout<<marks[i]<<" ";
    }
    return 0;
}