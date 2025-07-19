/*
    Create a C++ function that demonstrates variable scopes. Declare a local variable “x” and initialize it to 10. Inside the function, 
    declare another local variable “y” and initialize it to 5. Display the values of both variables. Then, define another block within the
    function and declare a new local variable “z” and initialize it to 3. Display the values of all variables within this new block. 
    Observe and explain the output.
*/

#include<iostream>
using namespace std;

// function
void scope();

int main()
{

    // call function
    scope();

    return 0;
}

// function
void scope()
{
    int x = 10;
    int y = 5;

    cout << "X : " << x << endl;
    cout << "y : " << y << endl;

    {
        int z = 3;
        cout << "X : " << x << endl;
        cout << "y : " << y << endl;
        cout << "Z : " << z << endl;
    }
}