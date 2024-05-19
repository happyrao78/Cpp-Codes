#include<iostream>
using namespace std;
class searching{
    int n,arr[100];
    public:
    void get(){
        cout<<"enter the size of array:"<<endl;
        cin>>n;
        cout<<"enter the elements in array:"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void binary(){
        int beg,mid,end,num;
        beg=0;
        end=n-1;
        mid=(beg+end)/2;
        cout<<"enter the number to be searched:"<<endl;
        cin>>num;
        while(beg <= end){
            if(num ==arr[mid]){
                cout<<"element found at position:"<<mid+1<<endl;
                return;
            }
            if( num > arr[mid]){
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=(beg+end)/2;
        }
        cout<<"element not found!!"<<endl;
    }
    void linear(){
        int num;
        cout<<"enter the number to search:"<<endl;
        cin>>num;
        for(int i=0;i<n;i++){
            if(num == arr[i]){
                cout<<"element found at position:"<<i+1<<endl;
                return;
            }
        }
        cout<<"element not found!!"<<endl;
    }
};
int main(){
    searching obj;
    int choice, cont=0;
    while(cont==0){
        cout<<"1. Binary search \n 2. Linear search \n 3. Exit \n";
        cin>>choice;
        switch(choice){
            case 1:
            obj.get();
            obj.binary();
            break;
            case 2:
            obj.get();
            obj.linear();
            break;
        }
        cout<<"Do you want to continue? (0/1)"<<endl;
        cin>>cont;
    }
    cout<<"Thank you!!\n";
    return 0;
}