#include<iostream>
#include<string>
using namespace std;

class student {
    string name;
    int roll;
    long int phone;
    string city;
    int marks[3];
    // int average = 0;

public:

    void getData() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll;
        cout << "Enter the phone number of the student: ";
        cin >> phone;
        cout << "Enter the city of the student: ";
        cin >> city;
        cout << "Enter the marks of the student in 3 subjects: ";
        for(int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Phone Number: " << phone << endl;
        cout << "City: " << city << endl;
        cout << "Marks in 3 subjects: ";
        for(int i = 0; i < 3; i++) {
            cout << marks[i] << " ";  
        }
    }
};

int main() {
    student one;
    void (student::*ptr)() = &student::getData;
    (one.*ptr)();
    one.displayData();
    return 0;
}
