/*write a program to create student record with the help of switch statements
case 1: maintain the student data
case 2:  calc percentage of 5 subjects
case 3: generate the grade card on basis of :
if % lies betweeen 80-90 he got grade A and above 90 grade '0'
% BETWEEN 70-80 grade B
60-70 grade C
40-60 grade D
else: F grade
*/
#include <iostream>
using namespace std;
int main()
{
    int cont = 1, choice, sum = 0, marks[5];
    float percentage =0;
    while (cont == 1)
    {

        cout << "Student record:" << endl;

        char name[20];
        cout << "\nEnter the name:" << endl;
        cin>>name;

        cout << "\nenter the marks in five subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }

        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        percentage = (sum / 500.0)  * 100;

        cout << "\nEnter your choice :\n1. Display Data: \n 2. Display Percentage \n 3. Display Grade " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEntered name is: " << name <<endl;
            
            cout << "\nMarks in five subjects are :" << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << marks[i] << " ";
            }
            break;

        case 2:
            cout << "Percenatage of 5 subjects is: " << percentage << endl;
            
            
        case 3:
            if (percentage > 90)
            {
                cout << "Grade O" << endl;
            }
            else if (percentage <= 90 && percentage > 80)
            {
                cout << "Grade: A" << endl;
            }
            else if (percentage > 70 && percentage <= 80)
            {
                cout << "Grade: B" << endl;
            }
            else if (percentage > 60 && percentage <= 70)
            {
                cout << "Grade: C" << endl;
            }
            else if (percentage > 40 && percentage <= 60)
            {
                cout << "Grade: D" << endl;
            }
            else
            {
                cout << "Grade: E" << endl;
            }
            break;
        }
        cout << "\nPress 1 to calculate another students data and 0 to exit." << endl;
        cin >> cont;
    }
    cout << "\nThankyou!" << endl;

    return 0;
}