/*
    10.Create a class called TemperatureConverter with member variables for temperature in Celsius and Fahrenheit. Implement functions 
    to convert temperature between these two units. Instantiate a TemperatureConverter object, convert temperature, and print the results.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

#define clrscr();system("cls");

// Create class
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
    int n;
    
    // create obj
    temperatureConveter t1;

    while(1)
    {
        cout << "\n1. Convert Celsius to Fahrenheit" << endl;
        cout << "2. Convert Fahrenheit to Celsius" << endl;
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
                cout <<"\nEnter Celsius For convert into Fahrenheit : ";
                cin >> celsius; 
                t1.celsiusTOFahrenheit(celsius);
                break;

            case 2:
                clrscr();
                cout << "Enter Fahrenheit For convert into Celsius : ";
                cin >> fahrenheit; 
                t1.FahrenheitTOcelsius(fahrenheit);
                break;

            default : 
                cout << "Invalid";
                break;
        }
        

    }



    

    
    
    

    return 0;
}