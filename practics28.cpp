/*
    Problem: Create a program to check whether a given number is prime or not.
    Real-life Use Case: Checking for prime numbers in cryptography or mathematical algorithms.
*/

#include<iostream>
#include<math.h>
using namespace std;

// create class
class is_Prime{

    public :

        void prime(int num)
        {   
            int count = 0;

            for(int i = 2 ; i <= num ; i++)
            {
                if( num % i == 0)
                {
                    count++;
                }
            }

            if(count == 1)
            {
                cout << "The Number Is Prime" << endl;
            }
            else
            {
                cout << "The Number Is Not Prime" << endl;
            }

        }


};

int main()
{
    int num;

    cout << "Enter number : ";
    cin >> num; 

    // create obj
    is_Prime p1;
    p1.prime(num);  

    return 0;
}