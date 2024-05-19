#include <iostream>
using namespace std;
class divisible
{
    int n;

public:
    static int count;
    static int count2;
    void get()
    {

        while (n % 8 == 0)
        {
            cout << "enter the number " << count2 << ":" << endl;
            cin >> n;
            count2++;
            if(n%8==0){
            count++;
            }
            if (n % 8 != 0)
            {
                break;
            }
        }
    }

    void display()
    {
        cout << "You entered "<<count2-1<<" numbers out of which " << count<<" numbers are divisble by 8" << endl;
    }
};
int divisible::count = 0;
int divisible::count2 = 1;
int main()
{
    divisible d;
    d.get();
    d.display();

    return 0;
}