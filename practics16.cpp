/*
    Create a union named “Data” with members integer, float, and char. Write a C++ program to demonstrate the usage of the union by 
    taking user input for each data type and displaying the values stored in the union.
*/

#include <iostream>
using namespace std;

union NumericValue {
    float floatValue;
    double doubleValue;
    char ch;
};

NumericValue n;

int main() {
    
    cout << "Enter Double value : ";
    cin >> n.doubleValue;

    cout << "Enter float value : ";
    cin >> n.floatValue; 

    cout << "Enter char value : ";
    cin >> n.ch; 
    


    cout << "doubleValue : " << n.doubleValue << endl;
    cout << "FloatValue : " << n.floatValue << endl;
    cout << "charcater: " << n.ch << endl;

    return 0;
}