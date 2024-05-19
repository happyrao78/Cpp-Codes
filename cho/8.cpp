/*create a class name array operation which includes the search operation using menu driven programming create atleast three functions 
get linear search and binary search take a input from user and perform the set operations*/
#include<iostream>

using namespace std;
class arr_operation{
    public:
    int n;
    int arr[100];
    void get(){
        cout<<"enter the size of array: ";
        cin>>n;
        cout<<"enter the elements of array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
 }
 void linear(){
 int item2;
 cout<<"\nenter the element to be searched: ";
 cin>>item2;
 for(int i=0;i<n;i++){
    if(item2 == arr[i]){
        cout<<"element found at position="<<i+1;
        return; 
    }
 }
 cout<<"element not found";
 }

 void binary_search(){
    int beg, end,mid,item;
    cout<<"enter the element to be searched: ";
    cin>>item;
    beg=0;
    end=n-1;
    mid= (beg+end)/2;
    while(beg<=end){
        if(item == arr[mid]){
            cout<<"element found at position= "<<mid+1;
            
            return;
        }
        if(item > arr[mid]){
            beg = mid+1;
            
        }
        else{
            end = mid-1;
        }
        mid=(beg+end)/2;
    }
    cout<<"\nelement not found!!";
 }
 };
int main(){
    arr_operation a;
    int choice,cont=0;
  
    while(cont==0){
          cout<<"\n1.Linear search \n2.Binary_search";
    cout<<"\nenter the choice: \n";
    cin>>choice;
        switch(choice){
            case 1:
            a.get();
            a.linear();
            break;
            case 2:
            a.get();
            a.binary_search();
            break;
        }
        cout<<"\ndo you want to continue press 0 to continue 1 to exit: ";
        cin>>cont;
    }
    cout<<"thanks happy yadav!!!!!";
    return 0;
}