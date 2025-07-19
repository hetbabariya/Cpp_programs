/*
    1. Create a class called Rectangle with member variables for length and width, and member functions to get and set those values.
         Instantiate a Rectangle object and set its length and width. Print the length and width.
*/

#include<iostream>
using namespace std;

// create class
class Rectangle{

    private :
        double length;
        double width;

    public :

        void setdata(double length , double width)
        {
            this->length = length;
            this->width = width;
        }
        
        double getdata()
        {
            cout << "Length : " << this->length << endl;
            cout << "Width : " << this->width;
        }

};

int main()
{
    Rectangle r1;
    r1.setdata(55.67 , 12.5);
    r1.getdata();


    return 0;
}