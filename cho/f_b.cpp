#include <iostream>
using namespace std;
int main()
{
    int a, choice, cont = 1;
    while (cont == 1)
    {
        cout << "Menu Program:\n 1.Palindrome Check \n 2.Armstrong Check \n Enter the option:\n";
        cin >> choice;
        cout << " enter a number:";
        cin >> a;
        if (choice == 1)
        {
            int ld = 0;
            int rev = 0;
            int temp = a;
            while (temp != 0)
            {
                ld = temp % 10;
                rev = (rev * 10) + ld;
                temp /= 10;
            }
            if (a == rev)
            {
                cout << " Palindrome ";
            }
            else
            {
                cout << "Not palindrome";
            }
        }
        else
        {
              int ld = 0;
            int rev = 0;
            int temp = a;
            while (temp > 0)
            {
                ld = temp % 10;
                rev += ld*ld*ld;
                temp /= 10;
            }
            if (a == rev)
            {
                cout << " Armstrong ";
            }
            else
            {
                cout << "Not Armstrong ";
            }
           
        }
        cout << "\nenter 1 for yes or any other number for exit : \n";
        cin >> cont;
    }
    cout << "\nThanks.";

    return 0;
}
