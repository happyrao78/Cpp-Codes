#include<iostream>
using namespace std;
class binary{
     string s;
    public:
    void get(){
        cout<<"enter binary number";
        cin>>s;
    }
    void check(){
        for(int i=0;i<s.length();i++){
            if(s.at(i) !='0' && s.at(i) !='1'){
                cout<<"incorrect binary format"<<endl;
                exit(0);
            }
        }
    }
    void compliment(){
        check();
        for(int i=0;i<s.length();i++){
            if(s.at(i) =='0'){
                s.at(i)= '1';
            }
            else{
                s.at(i)= '0';
            }
        }
    }
    void show(){
        compliment();
        cout<<"the 1's compliment of the binary number is:"<<s<<endl;
    }
};
int main(){
    binary obj;
    obj.get();
    obj.show();
    return 0;
}