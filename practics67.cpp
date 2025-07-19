/*
    22.Create a class called PasswordGenerator with member functions to generate random passwords of a specified length. 
    Include options to include uppercase letters, lowercase letters, numbers, and special characters in the passwords. Instantiate 
    a PasswordGenerator object, generate passwords, and display them
*/


#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;

// create class
class PasswordGenerator{

    private : 

        string upper(int length);
        string lower(int length);
        string number(int length);
        string symbol(int length);
        string shufflePassword(string str);

        int ulength , llength , nlength , slength;
        
    public :

        void generatepasswords()
        {
            cout << "Enter length of upper case : ";
            cin >> ulength;
            
            cout << "Enter length of Lower case : ";
            cin >> llength;
            
            cout << "Enter length of Number : ";
            cin >> nlength;
            
            cout << "Enter length of Special character : ";
            cin >> slength;

            string password = upper(ulength) + lower(llength) + number(nlength) + symbol(slength);
            
            cout << "\n--------------------------------------------------" << endl;
            cout << "Your Password is : " << shufflePassword(password) << endl;
            cout << "--------------------------------------------------\n" << endl;
        }
    

};

// upper
string PasswordGenerator :: upper(int length)
{
    string upper = "";
    char uppercaseLetters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M','N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int temp;


    for(int i = 0 ; i < length ; i++)
    {
        temp = rand() % 26;
        upper += uppercaseLetters[temp];
    }

    return upper;
}   

// lower
string PasswordGenerator :: lower(int length)
{
    string lower = "";
    char lowerLetters[26] {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int temp;


    for(int i = 0 ; i < length ; i++)
    {
        temp = rand() % 26;
        lower += lowerLetters[temp];
    }

    return lower;
}

// number
string PasswordGenerator :: number(int length)
{
    string number = "";
    char numberlist[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int temp;


    for(int i = 0 ; i < length ; i++)
    {
        temp = rand() % 10;
        number += numberlist[temp];
    }

    return number;
}

// special char
string PasswordGenerator :: symbol(int length)
{
    string symbol = "";
    char symbollist[31] = {'!', '"', '#', '$', '%', '&' , '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '{', '|', '}', '~'};
    int temp;


    for(int i = 0 ; i < length ; i++)
    {
        temp = rand() % 30;
        symbol += symbollist[temp];
    }

    return symbol;
}

string PasswordGenerator :: shufflePassword(string str)
{   
    int length = str.length();

    for (int i = 0; i < length; i++) 
    {
        
        int j = rand() % length;
        
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return str;
}



// main()
int main()
{
    PasswordGenerator p1;

    srand(time(NULL));

    p1.generatepasswords();


    return 0;
}
