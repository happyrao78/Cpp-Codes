/*create a calculator class perform the different operations on different types of numbers pass the argument to function for performing the calculation. choice 1 for additon ,2 for subtraction ,3 for multiplication ,4  for divison */
#include<iostream>
using namespace std;
class calculator{
    public:
    int a, b;
    //public:
    void get_data(void){
        cout<<"enter a: "<<endl;
        cin>>a;
        cout<<"enter b:"<<endl;
        cin>>b;
    }
        int addition(int a, int b){
            cout<<"sum: "<<a+b<<endl;
        }
         int subtraction(int a, int b){
            cout<<"difference: "<<a-b<<endl;
        }
         int multiply(int a, int b){
            cout<<"product: "<<a*b<<endl;
        }
         int divide(int a, int b){
            cout<<"division: "<<a/b<<endl;
        }
    };
int main(){
     calculator data;
    int choice,count=1;
    while(count==1){
        cout<<"\nenter choice:\n 1.additon \n 2. subtraction \n 3. multiplication\n 4. division\n"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            data.get_data();
            data.addition(data.a,data.b);
            break;

            case 2:
            data.get_data();
            data.subtraction(data.a,data.b);
            break;

            case 3:
            data.get_data();
            data.multiply(data.a,data.b);
            break;

            case 4:
            data.get_data();
            data.divide(data.a,data.b);
            break;
        }
        cout<<"enter 1 to continue 0 to exit:"<<endl;
        cin>>count;
    }
    cout<<"\n !!!thanks happy!!!"<<endl;
    
    
    return 0;
}