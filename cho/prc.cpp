/*create a employe class, include emp id, name and add one static member named company, add one paramterixed constructor to initialize the data member, also add functions to calculaate gross salary of employee and display details whose emp id is 109,input atleast three employee details*/
#include<iostream>
#include<string>
using namespace std;
class employee{
    int emp_id;
    string name;
    int hra=0, da=0, ma=300,basic_sal, gross_sal=0;
    static string company;
    public:
    employee(  int h, int d, int m){
        
        hra=h;
        da=d;
        ma=m;
        // basic_sal=b;
    }
    void get_data(){
        cout<<"Enter the employee id: "<<endl;
        cin>>emp_id;
        cout<<"Enter the name of employee: "<<endl;
        cin>>name;
        cout<<"Enter the basic salary of employee: "<<endl;
        cin>>basic_sal;
    }
     void calculate()
    {
        hra = 0.2 * basic_sal;
        da = 0.25 * basic_sal;
        gross_sal = basic_sal + hra + da + ma;
    }
    void display()
    {
        cout << "Employee id: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Gross salary: " << gross_sal << endl;
        cout<<company<<endl;
    }
   

    void display_second()
    {
        if (emp_id == 109)
        {
            cout << "Details if employee with id 109:" << endl;
            cout << "\n Name: " << name << endl;
            cout << "\n Gross: " << gross_sal << endl;
        }
          
    }
};
string employee::company = "XYZ";
int main()
{ 
    employee e1(0, 0, 300);
    employee e2(0, 0, 300);
    employee e3(0, 0, 300);
    e1.calculate();
    e1.get_data();
    e2.calculate();
    e2.get_data();
    e3.calculate();
    e3.get_data();
    e1.display();
    e2.display();
    e3.display();
    e1.display_second();
    e2.display_second();
    e3.display_second();
    return 0;
}
