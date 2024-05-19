#include <iostream>
using namespace std;
class assignment
{
protected:
    int a1, a2;

    void get(int a1, int a2)
    {
        this->a1 = a1;
        this->a2 = a2;
    }
    void display()
    {
        cout << "marks of assignment 1: " << a1 << endl;
        cout << "marks of assignment 2: " << a2 << endl;
    }
};
class sessionalTest
{
protected:
    float st1, st2;

    void get(float st1, float st2)
    {
        this->st1 = st1;
        this->st2 = st2;
    }
    void display()
    {
        cout << "marks of sessional test 1: " << st1 << endl;
        cout << "marks of sessional test 2: " << st2 << endl;
    }
};
class finalInternal : public assignment, public sessionalTest
{
    int attendance;
    int finalMarks;
    float finalst;

public:
    finalInternal()
    {
        assignment::get(14, 16);
        sessionalTest::get(34.5, 30.5);

        attendance = 5;
    }

    float calculate()
    {
        if (a1 > a2)
        {
            finalMarks = a1;
        }
        else
        {
            finalMarks = a2;
        }
        if (st1 > st2)
        {
            finalst = st1;
        }
        else
        {
            finalst = st2;
        }
        float result = finalMarks + finalst + attendance;
        cout << "Final internal marks: " << result << endl;
        return result;
    }
};

int main()
{
    finalInternal obj;
    obj.calculate();
    // finalInternal obj1(14, 16);
    // finalInternal obj2(34.5, 30.5);
    // assignment::display();
    // sessionalTest::display();
    return 0;
}