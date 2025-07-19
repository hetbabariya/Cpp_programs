// 5.Check whether a given number is prime or not.

#include<iostream>
using namespace std;

// function
void is_prime(int);

int main(void)
{

    int n;

    cout << "Enter number  : ";
    cin >> n;

    // call function
    is_prime(n);

    return 0;
}

// function
void is_prime(int n)
{
    int count = 0;

    for(int i = 2 ; i <= n ; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 1)
    {
        cout << n << " is prime number";
    }
    else
    {
        cout << n << " is not prime number";
    }


}
