/*
    2. Create a class called Date with member variables for month, day and year. Include a constructor to initialize the date and a 
       function to print the date. Instantiate a Date object, initialize it in the constructor, and call the print function.
*/


#include<iostream>
using namespace std;

// create class
class Date{

    private :
        int day;
        string month;
        int year;

    public :

        Date()
        {
            day = 0 ;
            month = "" ;
            year = 0 ;
        }
        
        Date(int day , string month , int year)
        {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        
        void print()
        {
            cout << "Day : " << this->day << endl;
            cout << "Month : " << this->month << endl;
            cout << "Year : " << this->year << endl;
        }
        

};

int main()
{
    Date d1(25,"july",2023);

    d1.print();


    return 0;
}
