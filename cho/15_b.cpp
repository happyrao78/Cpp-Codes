#include<iostream>
#include<string>
using namespace std;

class student {
    string name;
    int roll;
    long int phone;
    string city;
    int marks[3];
    int average=0;
public:
    void getData() {
        cout << "Enter the name of the student: "<<endl;
        cin >> name;
        cout << "Enter the roll number of the student: "<<endl;
        cin >> roll;
        cout << "Enter the phone number of the student: "<<endl;
        cin >> phone;
        cout << "Enter the city of the student: "<<endl;
        cin >> city;
        cout << "Enter the marks of the student in 3 subjects: "<<endl;
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
        for(int i = 0; i < 3; i++) {
            average += marks[i];
        }
        cout << "\nAverage marks: " << average/3;
    }
};

int main() {
    student one,two;
    student *ptr[5];
ptr[0]=&one;
ptr[0]->getData();
ptr[0]->displayData();
ptr[1]=&one;
ptr[1]->getData();
ptr[1]->displayData();
ptr[2]=&one;
ptr[2]->getData();
ptr[2]->displayData();
ptr[3]=&one;
ptr[3]->getData();
ptr[3]->displayData();
ptr[4]=&one;
ptr[4]->getData();
ptr[4]->displayData();
    return 0;
}