/*
    1.Design a class called Book with member variables for title, author, and publication year. Include a function to display all the
    book details. Create an array of Book objects and display the details of each book.
*/

#include<iostream>
using namespace std;

class Book{

    private :
        string title;
        string author;
        int publicationYear;
    
    public :

        void setdata()
        {
            cout << "\nEnter Book Title : ";
            cin >> this->title; 

            cout << "Enter Book Author : ";
            fflush(stdin);
            cin >> this->author; 
            
            cout << "Enter Book publish Year : ";
            fflush(stdin);
            cin >> this->publicationYear; 
        }

        void display()
        {
            cout << "\n----------------------------------------" << endl;
            cout << "Title : " << this->title << endl;
            cout << "Author : " << this->author << endl;
            cout << "Publication Year : " << this->publicationYear << endl;
            cout << "----------------------------------------" << endl;
        }

};


int main()
{
    int n , size = 10 , IDX = 0;

    Book b1[size];

    while(1)
    {
        cout << "\n1. Setdata" << endl;
        cout << "2. display data" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice number : ";
        cin >> n;

        if(n == 3)
        {
            break;
        }

        switch(n)
        {
            case 1:
                b1[IDX].setdata();
                IDX++;
                break;

            case 2:
                for(int i = 0 ; i < IDX ; i++ )
                {
                    b1[i].display();
                }
                break;

            default:
                cout << "Invalid...";

        }

    }
    
    
    

    return 0;
}