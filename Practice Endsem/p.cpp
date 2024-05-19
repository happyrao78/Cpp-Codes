#include<iostream>
using namespace std;
 class bkwas{
     protected:
     string username="chutiya";
     
 };
 class londa1:bkwas
    {
     public:
     string name="naman";
     void show(){
         cout<<" "<<username<<endl;
         cout<<" "<<name<<endl;
     }
     
 };
  class londa2: bkwas{
     public:
     
     string name="krishna";
     void disp(){
         cout<<" "<<name<<endl;
     }
  };
  int main(){
      londa1 l1;
      l1.show();
      
      londa2 l2;
        l2.disp();
        
      return 0;
      
  };
  