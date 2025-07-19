/*
    Problem: Write a program to find the largest and smallest elements in an array.
    Real-life Use Case: Data analysis applications that require finding extreme values.
*/


#include<iostream>
using namespace std;

// create class
class findLargestSmallest{

    public :

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


};

int main()
{
    // create obj
    findLargestSmallest f1;

    int n;
    cout << "Enter array length : ";
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    // display output and call function
    cout << "Smallest Element is : " << f1.smallest(arr,n) << endl;
    cout << "Largest Element is : " << f1.largest(arr,n);

    return 0;
}