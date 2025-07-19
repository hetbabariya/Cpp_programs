/*
    Problem: Develop a program that generates Fibonacci series up to a given number.
    Real-life Use Case: Fibonacci series can be used in finance, art, and various mathematical applications.
*/

#include<iostream>
#include<math.h>
using namespace std;

// create class
class Fibonacci{

    public :

        void fibonacci(int n)
        {
            cout << "\nFibonacci Series : " ;

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


};

int main()
{
    // create obj
    Fibonacci f1;

    int num;
    cout << "Enter number : ";
    cin >> num; 

    f1.fibonacci(num);

    return 0;
}