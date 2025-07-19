/*
    14.Create a class called Shape with member functions to calculate the area and perimeter. Design derived classes Circle, Square, 
    and Triangle that inherit from Shape. Instantiate objects of each class, calculate their respective area and perimeter, and print the results.
*/

#include<iostream>
#include<math.h>
using namespace std;

# define pi 3.14

class Shape {
public:
    virtual double area() = 0; 
    virtual double perimeter() = 0;
};

// Derived class Circle
class Circle : public Shape
{
    private:
        double radius;

    public:

        Circle(double r) : radius(r) {}

        double area()
        {
            return pi * radius * radius;
        }

        double perimeter()
        {
            return 2 * pi * radius;
        }
};

// Derived class Square
class Square : public Shape
{
    private:
        double side;

    public:

        Square(double s) : side(s) {}

        double area()
        {
            return side * side;
        }

        double perimeter()
        {
            return 4 * side;
        }
};

// Derived class Triangle
class Triangle : public Shape 
{
    private:
        double a, b, c;

    public:

        Triangle(double s1, double s2, double s3) : a(s1), b(s2), c(s3) {}

        double area()
        {
            double s = (a + b + c) / 2; // semi-perimeter
            return sqrt(s * (s - a) * (s - b) * (s - c));
        }

        double perimeter()
        {
            return a + b + c;
        }
};

int main() 
{
    Circle circle(5.0);
    Square square(4.0);
    Triangle triangle(3.0, 4.0, 5.0);

    cout << endl <<"Circle: Area = " << circle.area() << " | Perimeter = " << circle.perimeter() << endl  ;
    cout <<"Square: Area = " << square.area() << "   | Perimeter = " << square.perimeter() << endl;
    cout <<"Triangle: Area = " << triangle.area() << "  | Perimeter = " << triangle.perimeter() << endl << endl ;


    return 0;
}
