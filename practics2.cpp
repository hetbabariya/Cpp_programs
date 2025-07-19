// 2.Find the largest number among three given numbers and display it.

#include<iostream>
using namespace std;

void largest(int n1 , int n2 , int n3);

int main(void)
{

    int n1 , n2 , n3;

    cout << "Enter number 1 : ";
    cin >> n1;
    
    cout << "Enter number 2 : ";
    cin >> n2;
    
    cout << "Enter number 3 : ";
    cin >> n3;

    largest( n1 , n2 , n3);
    
    
    return 0;
}

void largest(int n1 , int n2 , int n3)
{
    int largest;

    largest = n1;

    if(n2 > largest)
    {
        largest = n2;
    }
    
    if (n3 > largest)
    {
        largest = n3;
    }

    cout << largest << " is Largest...";
}   