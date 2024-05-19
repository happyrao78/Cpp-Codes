#include<iostream>
using namespace std;
class function_call{
    int a,b;
    public:
    int add(int x,int y);
    int multiply(int *c,int *d);
    int divide(int &m,int &n);
};
int function_call::add(int x,int y){
    cout<<"sum= "<<x+y<<endl;
}
int function_call::multiply(int *c,int *d){
    cout<<"product= "<<*c * *d<<endl;
}
int function_call::divide(int &m,int &n){
    if(n==0){
        cout<<"Division by zero is not possible"<<endl;
    }
    else
    cout<<"quotient= "<<m/n<<endl;
}
int main(){
    function_call obj;
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    obj.add(num1,num2);
    obj.multiply(&num1,&num2);
    obj.divide(num1,num2);
    return 0;
}