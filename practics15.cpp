/*
    Implement a function in C++ that takes two integer arguments and swaps their values using pass-by-reference. Test the function by 
    taking input from the user and displaying the swapped values.
*/

#include<iostream>
using namespace std;

// function
void swap(int* ,int * );


int main()
{
    int n1,n2;

    cout << "Enter number 1 : ";
    cin >> n1;
    
    cout << "Enter number 2 : ";
    cin >> n2;

    cout << "Before Swaping : " << endl;
    cout << "a = " << n1 << endl;
    cout << "b = " << n2 << endl;

    swap(&n1 , &n2);

    cout << "After Swaping : " << endl;
    cout << "a = " << n1 << endl;
    cout << "b = " << n2 << endl;
    return 0;
}

// function
void swap(int *a,int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}