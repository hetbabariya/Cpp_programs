/*
    7. Create a class called Vehicle with member variables for make, model and year. Include a constructor to initialize the values.
         Instantiate two Vehicle objects with different make, model and year values.
*/


#include<iostream>
using namespace std;

// create class
class Vehicle{

    private :
        string make;
        string model;
        int year;

    public :

        Vehicle()
        {
            make = "";
            model = "";
            year = 0;
        }

        Vehicle(string make , string model , int year)
        {
            this->make = make;
            this->model = model;
            this->year = year;
        }

        void getdata()
        {
            cout << "Make : " << this->make << endl;
            cout << "Model : " << this->model << endl;
            cout << "Year : " << this->year << endl;
        }

};

int main()
{

    Vehicle v1("BMW PVT" , "BMW B5"  , 2025);
    Vehicle v2("Audi PVT" , "Audi A5"  , 2022);

    v1.getdata();
    v2.getdata();


    return 0;
}
