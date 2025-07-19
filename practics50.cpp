/*
    5.Design a class called Triangle with member variables for three sides. Include a function to check if the triangle is valid and
      calculate its area. Instantiate a Triangle object, validate the sides, and print the area if it’s a valid triangle.

      Formula : Area = √ s*(s-a)*(s-b)*(s-c),
                where s = (a+b+c)/2
*/


#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

#define clrscr(); system("cls");

class Triangle{

    private :
        double a;
        double b;
        double c;

    public :

        Triangle()
        {
            a = 0;
            b = 0;
            c = 0;
        }

        void setdata()
        {
            cout << "\nEnter side 1 : ";
            cin >> this->a; 

            cout << "Enter side 2 : ";
            cin >> this->b; 
            
            cout << "Enter side 3 : ";
            cin >> this->c; 

            cout << "\n-----------------------------------------" << endl;
            cout << "Data set successfuly..." << endl;
            cout << "-----------------------------------------" << endl;
        }
        
        bool checkValid()
        {
            if( (a + b > c) && (a + c > b) && (b + c > a)) 
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        double area()
        {
            if (checkValid())
            {
                double s = (a + b + c) / 2;

                return sqrt(s * (s-a) * (s-b) * (s-c));
            }
            else{
                cout <<"------------------------" << endl;
                cout << "Triangle is not valid..."<< endl; 
                cout <<"--------------------------" << endl;
            }
            
        }
        

        void display()
        {
            if(checkValid())
            {
                cout <<"----------------------------------" << endl;
                cout    <<"Area of the triangle: "<< area() <<endl;
                cout <<"----------------------------------" << endl;
            }
            else
            {
                cout <<"------------------------" << endl;
                cout << "Triangle is not valid..."<< endl; 
                cout <<"--------------------------" << endl;
            }
        }

};


int main()
{

    Triangle t1;
    int n;

    while(1)
    {
        cout << "\n1. setdata " << endl;
        cout << "2. Area " << endl;
        cout << "3. Exit" << endl;
        cout << "Enter number : ";
        cin >> n;

        if(n == 3)
        {
            break;
        }

        switch(n)
        {
            case 1:
                clrscr();
                t1.setdata();
                break;

            case 2:
                clrscr();
                t1.display();
                break;

            default : 
                cout << "Invalid";
                break;
        }
        

    }



    return 0;
}