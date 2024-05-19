/*create a pgm that manage employee record demonstrate the use of default, parametrized and copy constructor as well to delete the obj by destructor and solve the following queries:
1. display all the details of employee whose salary is more than 20000
2. count the total no. of employees they work in cse department
3. display the name and count of how many employee names start with s
*/
#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    string name;
    string department;
    int salary;
    static int count;
    static int count2;

public:
    employee()
    {
        cout << "default is called" << endl;
    }
    employee(string n, string d, int s)
    {
        name = n;
        department = d;
        salary = s;
        if (salary > 20000)
        {
            cout << "Name: " << name << endl;
            cout << "Department: " << department << endl;
            cout << "Salary: " << salary << endl;
        }
        if (department == "cse")
        {
            count++;
            cout << "total no. of employees working in cse department: " << count << endl;
        }
        if (name.at(0) == 's' || name.at(0) == 'S')
        {
            count2++;
            cout << "Name: " << name << endl;
            cout << "Employees name starting with s/S :" << count2 << endl;
        }
        else
        {
            cout << "Name: " << name << endl;
            cout << "Department: " << department << endl;
            cout << "Salary: " << salary << endl;
        }
    }
    employee(employee &obj)
    {
        name = obj.name;
        department = obj.department;
        salary = obj.salary;
        cout << "copy constructor called" << endl;
    }
    ~employee()
    {
        cout << "Destructor is called " << endl;
    }
};
int employee::count = 0;
int employee::count2 = 0;
int main()
{
    string user_name, department;
    int sal;
    employee obj[5];//array of objects
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name:" << endl;
        cin >> user_name;
        cout << "Enter department:" << endl;
        cin >> department;
        cout << "Enter salary:" << endl;
        cin >> sal;
        employee(user_name, department, sal);
    }
    employee obj2(obj[0]);

    return 0;
}