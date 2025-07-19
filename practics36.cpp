/*
    Problem: Write a program to find the factorial of a given number.
    Real-life Use Case: Calculating permutations and combinations in various scenarios.
*/

#include<iostream>
using namespace std;

// create class
class factorial{

    public :

        int facto(int n)
        {
            int fact;

            if( n == 1 )
            {
                return 1;
            }

            fact = n * facto(n-1); 

            return fact;
        }


};

int main()
{
    // create obj
    factorial f1;

    int num;

    cout << "Enter number : ";
    cin >> num; 

    cout << "Factorial is : " << f1.facto(num);  

    return 0;
}