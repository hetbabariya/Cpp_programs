// 10.Generate the Fibonacci series up to a specified limit and display the numbers.

#include<iostream>
using namespace std;

void fibonacci(int );

int main()
{
    int n; 

    cout << "Enter limit : ";
    cin >> n;

    cout << "\nFibonacci series is : " << endl;
    fibonacci(n);


    return 0;
}


// function

void fibonacci(int n)
{
    int a = 0 , b = 1 , c;

    for(int i = 0 ; i < n ; i ++)
    {
        if(i <= 1 )
        {
            c = i ;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
            
        }
        cout << c  << " ";
    }
}