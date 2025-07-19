/*
    Problem: Create a program to reverse a string without using any built-in library functions.
    Real-life Use Case: String manipulation tasks in text processing or data analysis.

*/

#include<iostream>
#include<string.h>
using namespace std;

// cretae class
class ReverseString{

    private :
        string inputedString;
        string reverseString;

    public :

        // reverse string
        void reverse(string inputedString)
        {
            int length = inputedString.length();
            char temp;

            reverseString = inputedString; 
            
            for(int i = 0 ; i < length / 2 ; i++)
            {
                temp = reverseString[i];
                reverseString[i] = reverseString[length - i - 1];
                reverseString[length - i - 1] = temp;
            }
        }

        // get reverse string
        string getReverseString()
        {
            return reverseString;
        }

};


int main()
{
    // create obj
    ReverseString r1;

    string str;

    cout << "Enter string : ";
    cin >> str;
  
    r1.reverse(str);
    cout << "Reverse String is : " << r1.getReverseString();;


    return 0;
}