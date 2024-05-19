//write a pgm to find the maximum and minimum number from array and calculate the product of both number if the product result is more than 9 then check the product is armstrong number  or not 
#include<iostream>
using namespace std;
class operation{
    int arr[100];
    int n;
    int max;
    int min;
    int product;
    public:
    void getData(){
        cout<<"Enter the size of array: \n";
        cin>>n;
        arr[n];
        cout<<"enter elements of array: \n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void maxMin(){
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
         cout<<"Maximum number: "<<max<<endl;
            cout<<"Minimum number: "<<min<<endl;
    }
    void check(){
              product = max*min;  
              if(product > 9){
                int temp = product;
                int ld= 0;
                int rev=0;
                while(temp !=0){
                    ld = temp %10;
                    rev += ld * ld * ld;
                    temp /=10;
                }
                if(rev == product){
                    cout<<"armstrong number \n";
                }
                else{
                    cout<<"not an armstrong number \n";
                }
                
              }
              else{
                cout<<"product is less than 9 \n";
              }
  
    }
    
};
int main(){
    operation obj;
    obj.getData();
    obj.maxMin();
    obj.check();
    return 0;
}