#include <iostream>
using namespace std;

class MyArray
{
    int maxValue, arr[100], n;

public:
    static int count;

    void get()
    {
        cout << "Enter the size of the array: ";
        cin >> n;
        cout << "Enter the elements in the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void findMaxElement()
    {
        maxValue = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (maxValue < arr[i])
            {
                maxValue = arr[i];
            }
        }
    }

    void removeMaxAndRight()
    {
        while (n != 0)
        {
            findMaxElement();

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == maxValue)
                {
                    for (int j = i; j < n; j++)
                    {
                        arr[j] = arr[j + 1];
                    }
                    n--;
                    break; // Exit the loop after removing the maximum element
                }
            }
            count++;
        }
    }

    void display()
    {
        cout << "Steps taken: " << count << endl;
        // Uncomment the following lines to display the modified array:
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
    }
};

int MyArray::count = 0;

int main()
{
    MyArray obj;
    obj.get();
    obj.removeMaxAndRight();
    obj.display();
    return 0;
}
