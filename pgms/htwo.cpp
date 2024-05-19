/* write a prog to find the sum of threee digit no. and if the sum is less than 9 display any message
if sum more than 9 or a two digit number then  perform the subtraction and display the result of that digit*/
#include <iostream>
using namespace std;
int main()
{
   int n;
            int diff=0;

    cout << "enter a number:";
    cin >> n;
    int ld = 0;
    int sum = 0;
    while (n != 0)
    {
        ld = n % 10;
        sum += ld;
        n /= 10;
    }
    cout<<sum<<endl;
    if (sum <= 9)
    {
        cout << sum << endl;
        cout << "Ram Ram bhai Sareya nai- from happy" << endl;
    }
    else
    {
        while(sum!=0){
    int rem = sum % 10;
        diff = rem - diff;
        sum/=10;
    }
    }
    cout << "difference is : " << diff << endl;

    return 0;
}