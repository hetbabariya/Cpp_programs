/*
    19.Create a class called Library with member variables for an array of books and its size. Implement functions to add a new book,
     search for a book by title, and display all books by a specific author. Instantiate a Library object, add books, and perform book 
     search and display.
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

# define clrscr();system("cls")
# define n  5

// create class
class Library{

    private :
        struct Book{
            int B_id;
            string B_title;
            string B_author;

        }Bdetails[n];

        int IDX;

    public :

        Library()
        {
            IDX = 0;
        }

        void addNewData()
        {

            cout << "\nenter Book id[int] : ";
            fflush(stdin);
            cin >> Bdetails[IDX].B_id;

            cout << "Enter B_title : ";
            fflush(stdin);
            cin >> Bdetails[IDX].B_title;

            cout << "Enter B_author : ";
            fflush(stdin);
            cin >> Bdetails[IDX].B_author;

            IDX++;

            cout << "\n----------------------------------" << endl;
            cout << "Data Add Successfuly..."<< endl;
            cout << "----------------------------------\n"<< endl;
        }

        void searchByTitle()
        {
            
            string name;
            int found = 0;

            cout << "Enter Book Title : ";
            cin >> name;

            cout << "\n\n\t\tBook Details : " << endl;
            cout << "--------------------------------------------------\n\n" << endl;

            cout << "B_id\t\tB_Title\t\tB_Author" << endl;
            cout << "--------------------------------------------------------\n" << endl;


            for(int i = 0 ; i < IDX ; i++)
            {


                if(Bdetails[i].B_title.compare(name) == 0)
                {
                    cout << Bdetails[i].B_id << "\t\t" << Bdetails[i].B_title << "\t\t" << Bdetails[i].B_author << endl; 
                    found = 1;
                }
            }
            

            if(found == 0)
            {
                clrscr();
                cout << "Book Not Found...";
            }
        }

        void displayAuthor()
        {
            string name;
            int found = 0;

            cout << "Enter Book Author Name : ";
            cin >> name;

            cout << "\n\n\t\tBook Details : " << endl;
            cout << "-------------------------------------------------------\n\n" << endl;

            cout << "B_id\t\tB_Title\t\tB_Author" << endl;
            cout << "--------------------------------------------------------\n" << endl;

            for(int i = 0 ; i < IDX ; i++)
            {
                if(Bdetails[i].B_author == name)
                {
                    cout << Bdetails[i].B_id << "\t\t" << Bdetails[i].B_title << "\t\t" << Bdetails[i].B_author << endl; 
                    found = 1;
                }

            }

            if(found == 0)
            {
                clrscr();
                cout << "Book Not Found...";
            }
        }



};
// main()
int main()
{
    // create obj
    Library l1;

    int choice;

    while (1)
    {
        cout << "\n\n1.Add data : ";
        cout << "\n2.Search by title : ";
        cout << "\n3.Display data of specific author : ";
        cout << "\n4.Exit : ";
        cout << "\n\nEnter Choice no. : ";
        cin >> choice;

        if(choice == 4)
        {
            break;
        }

        switch(choice)
        {
            case 1:
                clrscr();
                l1.addNewData();
                break;

            case 2:
                clrscr();
                l1.searchByTitle();
                break;

            case 3:
                clrscr();
                l1.displayAuthor();
                break;

            default : 
                cout << "Invalid..." << endl; 
                break;
        }

    }

    return 0;
}











