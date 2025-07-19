/*
    Create a C++ program that demonstrates the usage of the scope resolution operator “::“. Define a global variable “x” and a local 
    variable “y” within a function, both initialized to different values. Display both variables separately, using the scope resolution 
    operator to differentiate between the global and local variables.
*/



#include<iostream>
using namespace std;

// global variable
int x = 10 ;

int main()
{

    // local variable
    int y = 5;

    cout << "X : " << ::x << endl;
    cout << "y : " << y << endl;

    return 0;
}
