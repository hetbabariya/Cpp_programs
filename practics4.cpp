// 4.Calculate the factorial of a given number and display the result.

#include<iostream>
using namespace std;

// function
int factorial(int);

int main(void)
{

    int n;

    cout << "Enter number  : ";
    cin >> n;


    cout << n  << " Factorial is  : " << factorial(n);

    return 0;
}

// function
int factorial(int n)
{
    int fact;

    if( n == 1 )
    {
        return 1;
    }

    fact = n * factorial(n-1); 

    return fact;
} 