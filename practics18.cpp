/*
    Write a C++ program that takes an array of integers as input and finds the smallest and largest elements using pointers. 
    Display the smallest and largest values on the screen.
*/

#include<iostream>
using namespace std;

// function defination
int smallest(int * , int);
int largest(int * , int);


int main()
{
    int n;

    cout << "Enter array length : ";
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    // display output and call function
    cout << "Smallest Element is : " << smallest(arr,n) << endl;
    cout << "Largest Element is : " << largest(arr,n);

    return 0;
}

// function

// smallest function
int smallest(int *arr , int n)
{
    int Min;

    Min = *arr;

    for(int i = 0 ; i < n ; i++)
    {
        if(*(arr + i) < Min)
        {
            Min = *(arr+i);
        }
    }

    return Min;
}

// Largest function
int largest(int *arr , int n)
{
    int Max;

    Max = *arr;

    for(int i = 0 ; i < n ; i++)
    {
        if(*(arr + i) > Max)
        {
            Max = *(arr+i);
        }
    }

    return Max;
}