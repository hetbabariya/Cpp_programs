/*
    Write a C++ program that takes two arrays of integers as input and swaps their contents using pass-by-reference.
    After swapping, display the elements of both arrays on the screen.
*/

#include<iostream>
using namespace std;

// function
int swap(int* ,int ,int* ,int);


int main()
{
    int n1,n2;

    // input1
    cout << "Enter array1 length : ";
    cin >> n1;

    int arr1[n1];

    for(int i = 0 ; i < n1 ; i++)
    {
        cin >> arr1[i];
    }

    // input2
    
    cout << "\nEnter array2 length : ";
    cin >> n2;

    int arr2[n2];

    for(int i = 0 ; i < n2 ; i++)
    {
        cin >> arr2[i];
    }


    // display before swaping
    cout << "Before Swaping : " << endl;

    cout << "\nArray 1 : ";
    for(int i = 0 ; i < n1 ; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nArray 2 : ";
    for(int i = 0 ; i < n1 ; i++)
    {
        cout << arr2[i] << " ";
    }

    swap(arr1 , n1 , arr2 , n2);


    // display after swaping
    cout << "\n\nAfter Swaping : " << endl;

    cout << "\nArray 1 : ";
    for(int i = 0 ; i < n1 ; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << "\nArray 2 : ";
    for(int i = 0 ; i < n1 ; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}

// function
int swap(int *arr1 , int n1 , int *arr2 , int n2)
{
    if(n1 != n2)
        return 0;

    int temp;

   for(int i = 0 ; i < n1 ; i++)
   {
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
   }
}