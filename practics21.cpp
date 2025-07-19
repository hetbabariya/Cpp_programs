/*
    Define a global variable “counter” and initialize it to 0. Write a C++ function that takes an integer as input and increments
    the global counter by that value. Test the function by calling it multiple times with different integers and display the updated
    value of the global counter after each call.
*/


#include<iostream>
using namespace std;

// function
int input(int);

// global variable
int Counter = 0;

int main()
{
    int n;
    
    while(n != 0)
    {
        cout << "\n\nEnter number EXIT[0] : ";
        cin >> n;

        input(n);
        cout << "Counter is : " << Counter << endl;
    }

    return 0;
}

// function
int input(int n){
    Counter +=n;
}