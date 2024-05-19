#include<iostream>
using namespace std;
int main(){
    int *arr;
    int size;
    cout<<"enter the size of the array:";
    cin>>size;
    arr = new int[size];
    
    delete arr;
cout<<"dynamic memory is deleted successfully\n";
    return 0;
}