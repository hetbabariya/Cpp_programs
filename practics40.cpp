/*
    3. Create a class called Circle with a member variable for radius. Include a constructor to initialize the radius and member
        functions to return the circumference and area. Instantiate a Circle object, initialize the radius, and print the circumference and area.
*/

#include<iostream>
using namespace std;

float pi =  3.14; 

// create class
class Circle{

    private :
        double radius;

    public :

        Circle()
        {
            radius = 0;
        }
        
        Circle(double radius)
        {
            this->radius = radius;
        }
        
        double circumference()
        {
            return 2 * pi * radius;
        }
        
        double area()
        {
            return  pi * radius * radius;
        }
        

};

int main()
{

    Circle c1(5);
    cout << "circumference of circle is : " << c1.circumference() << endl;
    cout << "Area of circle is : " << c1.area();


    return 0;
}
