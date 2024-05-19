#include<iostream>
using namespace std;
class inc{
    int a;
    public:
    inc(){
        a=0;
    }
    void  operator ++(){
        a=a+1;
    }
    int show(){
    cout<<a<<endl;
    }
};
int main(){
    inc one, two;
    one.show();
    ++one;
    one.show();
    // one++;
    // one.show();

    return 0;
}