#include<iostream>
using namespace std;
class arr_op{
    int arr[100],n,max,min;
    public:
    void get(){
        cout<<"enter the size of array:"<<endl;
        cin>>n;
        cout<<"enter elements in array:"<<endl;
        for(int  i=0;i<n;i++){
            cin>>arr[i];
        }
        
    }
    void max_min(){
         max = arr[0];
         min = arr[0];
        for(int i=0;i<n;i++){
            if(max < arr[i]){
                max = arr[i];
            }
            if(min > arr[i]){
                min = arr[i];
            }
        }
        cout<<"largest element in array is:"<<max<<endl;
        cout<<"smallest element in array is:"<<min<<endl;
    }
    void insert_start(){
        int value1;
        cout<<"enter the number to add at starting of array:"<<endl;
        cin>>value1;
        n++;
        for(int i=n;i>=0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=value1;
        display();
    }

    void desired(){
        int value2,position;
        cout<<"enter the  number you want to add at desired position:"<<endl;
        cin>>value2;
        cout<<"enter the position:"<<endl;
        cin>>position;
        n++;
        for(int i=n;i>=position;i--){
            arr[i]=arr[i-1];
        }
        arr[position]=value2;
        display();
    }
    void remove(){
        int position;
        cout<<"enter the index to  delete the value:"<<endl;
        cin>>position;
        for(int i=position;i<n;i++){
            arr[i]=arr[i+1];
        }
        n--;
        display();
    }
    void middle(){
        max_min();
        int mid=n/2;
        n++;
        for(int i=n;i>mid;i--){
            arr[i]=arr[i-1];
        }
        arr[mid]=max+min;
        display();
    }
    void display(){
        cout<<"elements in array are:"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    arr_op obj;
    obj.get();
    obj.max_min();
    obj.insert_start();
    obj.desired();
    obj.remove();
    obj.middle();
    return 0;
}