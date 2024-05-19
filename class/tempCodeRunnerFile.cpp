/*pgm to create emlployee class include data members name ,basic sal ,hra(20% of basic salary) ,da(25%basic sal), ma(300rs)calculate the gross salary of employee and display the data on the basis of following query:
display the name and gross salary of employee whose employe id is 105
count the number of employee having salary more than 20000
count the number of employees whose name starts with vowel(a,e,i,o,u);*/
#include <iostream>
using namespace std;
#include <string> // Add this line to include the string library.

class employee
{
    string name;
    int salary;
    int id, hra = 0, da = 0, ma = 300, gross = 0;

public:
    static int count1;
    static int count2;
    static int count3;
    void get_data(void)
    {
        cout << "enter the name of employee " << count1 << ":" << endl;
        cin >> name;

        cout << "enter employee id: " << endl;
        cin >> id;
        cout << "Enter the basic salary of employee " << count1 << ":" << endl;
        cin >> salary;
        count1++;
    }
    void calculate()
    {
        hra = 0.2 * salary;
        da = 0.25 * salary;
        gross = salary + hra + da + ma;
    }

    void display(void)
    {
        cout << "\nName : " << name << endl;
        cout << "\nEmployee Id: " << id << endl;
        cout << "\ngross Salary: " << gross << endl;
    }
    void display_second()
    {
        if (id == 105)
        {
            cout << "Details if employee with id 105:" << endl;
            cout << "\n Name: " << name << endl;
            cout << "\n Gross: " << gross << endl;
        }
        if (salary > 20000)
        {
            cout << "Details of person having salary more than 20000:" << endl;
            cout << "\n Name: " << name << endl;
            cout << "\n Gross: " << gross << endl;

            count2++;
            cout << "No. of employees whose salary is greator than 20000 = " << count2 << endl;
        }
        if (name.at(0) == 'a' || name.at(0) == 'e' || name.at(0) == 'i' || name.at(0) == 'o' || name.at(0) == 'u')
        {
            count3++;
            cout << "No. of employee name starting with vowel =" << count3 << endl;
        }
    }
};
int employee::count1 = 1;
int employee::count2 = 0;
int employee::count3 = 0;
int main()
{
    int n;
    cout << "enter number of employees: " << endl;
    cin >> n;
    employee obj[n];
    for (int i = 0; i < n; i++)
    {
        obj[i].get_data();
        obj[i].calculate();
        obj[i].display();
    }
    for (int i = 0; i < n; i++)
    {
        obj[i].display_second();
    }
    return 0;
}