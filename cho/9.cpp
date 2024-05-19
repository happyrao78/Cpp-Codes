/*create a class array op and include array of number and incliude get and display function also perform follwoing operations using menu
1.find largest no. from array
2.perform the insertion at beginning for array
3.insert an element in arrray at the position entered by user
4.delete the element from array at set position 
5.cal the sum of largest and smallest */
#include<iostream>
using namespace std;
class arr_operation{
    public:
    int n,max,min,ite,pos;
    int arr[100];
    void get(){
        cout<<"enter the size of array: "<<endl;
        cin>>n;
        cout<<"enter the elements in array: "<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    // LARGEST AND MINIMUM ELEMENT IN GIVEN ARRAY
    void largest(){
        max= arr[0];
        min= arr[0];
        int i,j;
        for( i=0;i<n;i++){
            if(max < arr[i]){
                max = arr[i];
            }
            if(min > arr[i]){
                min = arr[i];
                j=i;
            }
        }
        cout<<"\nlargest element in array is: "<<max;
        cout<<"\nsmallest element in array is: "<<min;
    }
    //INSERT ELEMENT AT STARTING
    void insert_start(){
        int num;
        cout<<"\nenter the number to insert at beginning "<<endl;
        cin>>num;
        cout<<"\narray after insertion at starting"<<endl;
        n++;
        for(int i=n;i>=0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=num;
        display();
    }
    //INSERT THE SUM OF LARGEST AND SMALLEST ELEMENT AT MIDDLE
    void insert_mid(){
       
        int mid =n/2;
        n++;
       for(int i=n;i>mid;i--){
           arr[i]=arr[i-1];
       }
       arr[mid]=max+min;
       display();
    }
    //INSERT ELEMENT AT DESIRED POSITION
    void insert_desired(){
        // int ite,pos;
        cout<<"\nenter the item to insert: "<<endl;
        cin>>ite;
        cout<<"\nenter the index: "<<endl;
        cin>>pos;
        n++;
        for(int i=n;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=ite;
       display();
    }
    //REMOVE ELEMENT FROM DESIRED POSITION
    void remove(){
        int position;
        cout<<"enter position"<<endl;
        cin>>position;
        for(int i=position;i<n;i++){
            arr[i]=arr[i+1];
        }
        n--;
       display();
    }
    void display(){
        cout<<"\nArray display:"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};  
int main(){
    arr_operation obj;
    obj.get();
    obj.largest();
    obj.insert_start();
    obj.insert_mid();
    obj.insert_desired();
    obj.remove();
    return 0;
}