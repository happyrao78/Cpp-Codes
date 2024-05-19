/*In this code I have used the following concepts:
TASK 1:
1. Multiple Inheritance
2. Protected Access Specifier
3. Resolving Ambiguity for the getData function using the scope resolution operator
4. Using functionn overloading to perform run time polymorphism i.e. the function getData is overloaded in all the classes



NAME: HAPPY YADAV
CLASS: BCA-2C1
ROLL NO: 2310997091


*/

#include <iostream>
using namespace std;
class rectangle
{
protected:
    int length;
    int breadth;

public:
    void getData(int len, int bre)
    {
        length = len;
        breadth = bre;
    }
};
class circle
{
protected:
    int radius;

public:
    void getData(int rad)
    {
        radius = rad;
    }
};
class triangle
{
protected:
    float height;
    float base;

public:
    void getData(float h, float b)
    {
        height = h;
        base = b;
    }
};
class square
{
protected:
    float side;

public:
    void getData(float s)
    {
        side = s;
    }
};

class shape : public rectangle, public circle, public triangle, public square // i have used multiple inheritance over here
{
public:
    // here i have called the getData function of all the classes using the default constructor
    shape()
    {
        rectangle::getData(10, 20);
        circle::getData(5);
        triangle::getData(10.5, 20.5);
        square::getData(10);
    }
    void display()
    {
        cout << "Area of rectangle: " << length * breadth << endl;
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
        cout << "Area of triangle: " << 0.5 * height * base << endl;
        cout << "Area of square: " << side * side << endl;
    }
};

int main()
{
    shape obj;
    obj.display();
    // obj.getData(10, 20);
    // obj.getData(5);
    // obj.getData(10.5, 20.5);
    // obj.getData(10);
    return 0;
}