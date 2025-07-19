/*
    Problem: Implement a dictionary with key-value pairs and perform basic operations like adding, updating, and deleting entries.
    Real-life Use Case: Creating a simple dictionary application.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

#define clrscr();system("cls");

// create class
class Dictionary{

    private :

        typedef struct dict{
            string key;
            string value;
        }dict;

        dict d1[10];
        int IDX = 0;

    public :

        // add
        void DataAdd(string key , string value)
        {
            d1[IDX].key = key;
            d1[IDX].value = value;

            IDX++;
            cout << "\nData Add successfully..." << endl;
            cout << "----------------------------" << endl;
        }

        // update
        void DataUpdate(string key , string value)
        {
            int found = 0;

            for(int i = 0 ; i < IDX ; i++)
            {
                if(d1[i].key == key)
                {
                    found = 1;

                    d1[i].key = key;
                    d1[i].value = value;
                    
                    cout << "\nData Update successfully..." << endl;
                    cout << "----------------------------" << endl;
                    break;
                }
            }

            if(found == 0)
            {
                cout << "----------------------------" << endl;
                cout << "Key is not Found !" << endl;
            }
        }

        // delete
        void DataDelete(string key)
        {
            int found = 0;

            for(int i = 0 ; i < IDX ; i++)
            {
                if(d1[i].key == key)
                {
                    found = 1;
                    for(int j = i ; j < IDX - 1; j++)
                    {
                        d1[j].key = d1[j+1].key;
                        d1[j].value = d1[j+1].value;
                    }
                    
                    cout << "----------------------------" << endl;
                    cout << "\n Data Delete successfully..." << endl;
                    IDX--;
                }
            }

            if(found == 0)
            {
                cout << "----------------------------" << endl;
                cout << "Key is not Found !" << endl;
            }
        }

        // display specific key 
        void DataDisplay(string key)
        {
            int found = 0;

            for(int i = 0 ; i < IDX ; i++)
            {
                found = 1;
                if(d1[i].key == key)
                {
                    cout << "\n----------------------------" << endl;
                    cout << d1[i].key  << " : " <<  d1[i].value << endl;
                    cout << "----------------------------\n" << endl;
                }
            }

            if(found == 0)
            {
                cout << "----------------------------\n" << endl;
                cout << "Key is not Found !" << endl;
            }
        }
        
        // display all 
        void DataDisplayAll()
        {
            cout << "Key\t\tValue" << endl;
            cout << "-------------------------\n" << endl; 
            for(int i = 0 ; i < IDX ; i++)
            {
                cout << d1[i].key  << "\t:\t" <<  d1[i].value << endl;
            }
            cout << "-------------------------\n" << endl;
        }

};

int main()
{
    // create obj
    Dictionary d1;
    
    int n;
    string key,value;

    while(1)
    {
        cout << "\n1. add Data " << endl;
        cout << "2. update Data " << endl;
        cout << "3. Delete Data " << endl;
        cout << "4. Search KEY base Data " << endl;
        cout << "5. View all Data " << endl;
        cout << "6. Exit " << endl;
        cout << "Enter choice : ";
        cin >> n;

        if(n == 6)
        {
            break;
        }

        switch (n)
        {
            case 1:
                clrscr();
                cout << "\nEnter Key : ";
                cin >> key;
                cout << "Enter value : ";
                cin >> value;
                d1.DataAdd(key,value);
                break;

            case 2:
                clrscr();
                cout << "\nEnter Key : ";
                cin >> key;
                cout << "Enter value : ";
                cin >> value;
                d1.DataUpdate(key,value);
                break;

            case 3:
                clrscr();
                cout << "\nEnter Key : ";
                cin >> key;
                d1.DataDelete(key);
                break;

            case 4:
                clrscr();
                cout << "\nEnter Key : ";
                cin >> key;
                d1.DataDisplay(key);
                break;

            case 5:
                clrscr();
                d1.DataDisplayAll();
                break;
        
            default:
                cout << "Invalid...";
                break;
        }
   
    }


    return 0;
}