/*
    Problem: Write a program to convert temperatures between Celsius and Fahrenheit.
    Real-life Use Case: Weather applications that provide temperature conversions.
*/


#include<iostream>
#include<math.h>
using namespace std;

// create class
class temperatureConveter{

    public :

        void celsiusTOFahrenheit(double n)
        {
            cout << "---------------------------------"<< endl;
            cout << "Weather in Fahrenheit is : " << (n * 1.8) + 32 << endl;
            cout << "---------------------------------\n"<< endl;
        }
        void FahrenheitTOcelsius(double n)
        {
            cout << "--------------------------------" << endl;
            cout << " Weather in Celsius is : " << (n - 32) *  0.55 << endl;
            cout << "--------------------------------\n" << endl;
        }
};

int main()
{
    double celsius , fahrenheit;
    
    // create obj
    temperatureConveter t1;

    cout <<"\nEnter Celsius to convert Fahrenheit : ";
    cin >> celsius; 
    t1.celsiusTOFahrenheit(celsius);

    
    cout << "Enter Fahrenheit to convert Celsius : ";
    cin >> fahrenheit; 
    t1.FahrenheitTOcelsius(fahrenheit);

    

    return 0;
}