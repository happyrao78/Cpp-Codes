#include <iostream>
using namespace std;

class data {
    int size;
    int *arr;

public:
    void get(void) {
        cout << "Enter size of array:" << endl;
        cin >> size;

        arr = new int[size];

        cout << "Enter elements in the array:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        cout << "Array elements:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << endl;
        }

        delete[] arr;
    }
};

int main() {
    data obj1;
    obj1.get();
    return 0;
}
