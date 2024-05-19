#include <iostream>

// Base class Shape
class Shape
{
public:
    virtual double area() const = 0;      // Pure virtual function
    virtual double perimeter() const = 0; // Pure virtual function
};

// Derived class Rectangle inheriting from Shape
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override
    {
        return length * width;
    }

    double perimeter() const override
    {
        return 2 * (length + width);
    }
};

// Derived class Square inheriting from Rectangle
class Square : public Rectangle
{
public:
    Square(double side) : Rectangle(side, side) {}
};

int main()
{
    // Creating an instance of Rectangle
    Rectangle rectangle(5, 4);
    std::cout << "Rectangle Area: " << rectangle.area() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.perimeter() << std::endl;

    // Creating an instance of Square
    Square square(5);
    std::cout << "Square Area: " << square.area() << std::endl;
    std::cout << "Square Perimeter: " << square.perimeter() << std::endl;

    return 0;
}
