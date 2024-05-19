#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_roll(int r)
    {
        roll = r;
    }
    void get_roll()
    {
        cout << "Roll:" << roll << endl;
    }
};
class score : virtual public student // single inheritance is used in this score derived class
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "Score:" << score << endl;
    }
};
// start
class test : virtual public student // virtual keyword is used so as to reduce the ambiguity as without virtaul keeywprd it will  derive the roll data member 2 times
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks(void)
    {
        cout << "Maths:" << maths << endl;
        cout << "Physics:" << physics << endl;
    }
};
class result : public test, public score // multiple inheritance is used in this result class
{
public:
    void display(void)
    {
        get_roll();
        get_score();
        get_marks();
        cout << "Your total score is: " << score + maths + physics << endl;
    }
};
int main()
{
    result happy;
    happy.set_roll(7091);
    happy.set_score(10);
    happy.set_marks(99.5, 99.4);
    happy.display();

    return 0;
}