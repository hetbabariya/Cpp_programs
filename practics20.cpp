/*
    Write a C++ program that demonstrates the usage of global and local variables. Define a global variable to store the total number of 
    students in a class. Take input for the number of students in a function using a local variable and display the total count using the
    global variable.
*/

#include<iostream>
using namespace std;

int totalStudent = 0;

int main()
{
    int totalStudent;
    
    cout << "Enter no. of student in class : ";
    cin >> totalStudent;

    ::totalStudent = totalStudent;

    cout << "Total Count is : " << ::totalStudent;

    return 0;
}