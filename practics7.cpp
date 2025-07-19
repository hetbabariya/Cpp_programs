// 7.Check whether a given string is a palindrome or not.

#include<iostream>
#include<string.h>
using namespace std;

// function
void is_palindrome(string);

int main(void)
{

    string str;

    cout << "Enter String  : ";
    cin >> str;

    // function call
    is_palindrome(str);

    return 0;
}

// function
void is_palindrome(string str)
{
    int length = str.length();

    int i = 0 , found = 0;

    while( i < length/2)
    {
        if(str[i] != str[length - i - 1])
        {
            found = 1;
            break;
        }

        i++;
    }

    if(found == 0)
    {
        cout << "String is palindrome...";
    }
    else
    {
        cout << "String is not palindrome...";
    }

}