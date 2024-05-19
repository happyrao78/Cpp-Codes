#include<iostream>
using namespace std;
class multiArray{
    int arr[100][100];
    int brr[100][100];
    int a,b,c,d;
    public:
    friend void display(multiArray);
    void getData(){
        cout<<"Enter the number of rows and columns in first matrix: \n";
        cin>>a>>b;
        cout<<"enter the elements of first matrix: \n";
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>arr[i][j];
            }
        }
        cout<<"Enter the number of rows and columns in second matrix: \n";
        cin>>c>>d;
        cout<<"enter the elements of second matrix: \n";
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                cin>>brr[i][j];
            }
        }
    }
    void displayMatrix(){
        cout<<"First matrix: \n";
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"Second matrix: \n";
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                cout<<brr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    void addMatrix(){
        if(a==c && b==d){
            cout<<"Addition of Matrix: \n";
            for(int i=0;i<a;i++){
                for(int j=0;j<b;j++){
                    cout<<arr[i][j]+brr[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
        else{
            cout<<"Additon is not possible \n";
        }
    }
    void multiplyMatrix(){
        if(b==c){
            cout<<"Multiplication of Matrix: \n";
            for(int i=0;i<a;i++){
                for(int j=0;j<d;j++){
                    int sum=0;
                    for(int k=0;k<b;k++){
                        sum+=arr[i][k]*brr[k][j];
                    }
                    cout<<sum<<" ";
                }
                cout<<"\n";
            }
        }
        else{
            cout<<"Multiplication is not possible \n";
        }
    }
    

};
void display(multiArray m){
    cout<<"No. of rows and columns in first matrix: "<<m.a<<" "<<m.b<<"\n";
    cout<<"No. of rows and columns in second matrix: "<<m.c<<" "<<m.d<<"\n";
}
int main(){
    multiArray obj;
    int choice, cont=0;
   
    while(cont==0){
         cout<<"Enter the choice: \n 1. Addition of matrix \n 2. Multiplication of matrix \n 3. Display Friend Function \n";
    cin>>choice;
        switch(choice){
            case 1:
            obj.getData();
            obj.displayMatrix();
            obj.addMatrix();
            break;
            case 2:
            obj.getData();
            obj.displayMatrix();
            obj.multiplyMatrix();
            break;
            case 3:
            display(obj);
            break;

        }
        cout<<"Do you want to continue? (0/1) \n";
        cin>>cont;
    }
    cout<<"Thanks for using the program! \n";
    
    return 0;
}