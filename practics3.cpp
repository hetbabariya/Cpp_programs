// 3.Convert a temperature from Celsius to Fahrenheit and vice versa.

#include<iostream>
using namespace std;

void celsiusTOFahrenheit(float );
void FahrenheitTOcelsius(float );

int main(void)
{

    float t;
    int choice;
    
    while(choice != 3)
    {

        cout << "\n\n1. celsius TO fahrenheit" << endl;
        cout << "2. Fahrenheit TO celsius"<< endl;
        cout << "3. Exit" << endl;
        cout << "Enter number : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> t;
                celsiusTOFahrenheit(t);
                break;
            
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> t;
                FahrenheitTOcelsius(t);
                break;

            case 3 :
                break;
            
            default:
                cout << "Invalid...";
                break;
        }
    }

    return 0;
}


void celsiusTOFahrenheit(float n)
{
    cout << "\nFahrenheit is : " << (n * 1.8) + 32;
    cout << "\n-----------------------------";
}
void FahrenheitTOcelsius(float n)
{
    cout << "\n\nFahrenheit is : " << (n - 32) *  0.55;
    cout << "\n-----------------------------";
}