/*
    11.Design a class called Vector with member variables for x and y coordinates. Include functions to calculate the magnitude and 
    direction angle of the vector. Instantiate a Vector object, set its coordinates, and print the magnitude and angle.
*/

#include<iostream>
#include<math.h>
using namespace std;

class Vector{

    private :
        double x , y;

    public :

        Vector()
        {
            x = 0;
            y = 0;
        }

        Vector(double x , double y)
        {
            this->x = x;
            this->y = y;
        }

        // find magnitude
        double magnitude()
        {
            return sqrt(x*x + y*y);
        }
        
        // find angle
        double angle()
        {
            return atan2(y,x) * 180 / M_PI;
        }


};


int main()
{
    Vector v1(2,4);

    cout << "Vector Mangnitude : " << v1.magnitude() << endl;
    cout << "Vector Angle : " << v1.angle() << endl;


    return 0;
}