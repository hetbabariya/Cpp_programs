/*
    Define a structure called “Student” with members name, roll number, and age. Write a C++ function that takes a reference to the 
    structure as input and displays the details of the student.
*/


#include<iostream>
using namespace std;

// structure
struct Student{
    int rollNo;
    string name;
    int age;
};

// declare sr=tructure variable
struct Student s1;

// function defination
void display(Student & );



int main()
{
    s1.rollNo = 101;
    s1.name = "Het";
    s1.age = 19;

    // call function
    display(s1);    

    return 0;
}

// function
void display(Student &s1)
{
    cout << "Roll no : " << s1.rollNo << endl;
    cout << "Name : " << s1.name << endl;
    cout << "age : " << s1.age << endl;
};