/*
    Queue : 

    push()	inserts an element at the back of the queue
    pop()	removes an element from the front of the queue
    front()	returns the first element of the queue
    back()	returns the last element of the queue
    size()	returns the number of elements in the queue
    empty()	returns true if the queue is empty
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

# define size 10
#define clrscr(); system("cls");

class Queue{

    private :
        int arr[size];
        int IDX;

    public :

    Queue()
    {
        IDX = 0;
    }

    // push()
    void push(int element)
    {   

        if(IDX > size-1)
        {
            cout << "Queue is overflow..." << endl;
        }
        else
        {
            arr[IDX] = element;
            IDX++;
            cout << endl << "-----------------------------------------" << endl;
            cout << "Element "<<  arr[IDX-1] << " is pushed..." << endl;
            cout << "-----------------------------------------" << endl;
        }

    }
    
    // pop()
    void pop()
    {   
        IDX--;
        if(IDX < 0)
        {
            cout << "Queue is Empty..." << endl;
            IDX = 0;
        }
        else
        {       
            cout <<"-----------------------------------------" << endl;
            cout <<  "Element "<< arr[0] <<" is Poped... " << endl;
            cout << "-----------------------------------------" << endl;

            for(int i = 0 ; i < IDX ; i++)
            {
                arr[i] = arr[i+1];
            }   

        }

    }
    
    // front()
    void front()
    {   
        if(IDX <= 0)
        {
            cout <<"------------------------" << endl;
            cout << "Queue  is : Empty"<< endl; 
            cout <<"--------------------------" << endl;
            IDX = 0;
        }
        else
        {      
            cout <<"\n------------------------" << endl;
            cout << "Queue First Element is : " << arr[0] <<endl; 
            cout <<"--------------------------" << endl;
        }

    }
    
    // back()
    void back()
    {   
        if(IDX <= 0)
        {
            cout <<"------------------------" << endl;
            cout << "Queue  is : Empty"<< endl; 
            cout <<"--------------------------" << endl;
            IDX = 0;
        }
        else
        {      
            cout <<"\n------------------------" << endl;
            cout << "Queue Last Element is : " << arr[IDX-1] <<endl; 
            cout <<"--------------------------" << endl;
        }

    }
    
    // size()
    void Size()
    {   
        cout <<"------------------------" << endl;
        cout << "Queue size is : " << IDX<< endl; 
        cout <<"--------------------------" << endl;

    }
    
    // empty()
    void empty()
    {   
        if(IDX <= 0)
        {
            cout <<"------------------------" << endl;
            cout << "Queue size is : Empty"<< endl; 
            cout <<"--------------------------" << endl;
        }
        else
        {
            cout <<"------------------------" << endl;
            cout << "Queue size is : Not Empty"<< endl; 
            cout <<"--------------------------" << endl;
        }
    }

    // display()
    void display()
    {
        if(IDX <= 0)
        {
            cout <<"------------------------" << endl;
            cout << "Queue size is : Empty"<< endl; 
            cout <<"--------------------------" << endl;
            IDX = 0;
        }
        else
        {
            cout << "\nQueue is : " << endl; 
            cout <<"------------------------" << endl;
            for(int i = 0 ; i < IDX ; i++)
            {                
                cout << arr[i] << " | ";
            }
            cout <<"\n--------------------------" << endl;
        }

        
    }

};


int main()
{

    Queue s1;
    int n , ele;

    while(1)
    {
        cout << "\n1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. front()" << endl;
        cout << "4. back()" << endl;
        cout << "5. size()" << endl;
        cout << "6. empty()" << endl;
        cout << "7. Display" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter number : ";
        cin >> n;

        if(n == 8)
        {
            break;
        }

        switch(n)
        {
            case 1:
                clrscr();
                cout << "Enter element : ";
                cin >> ele;
                s1.push(ele);
                break;

            case 2:
                clrscr();
                s1.pop();
                break;

            case 3:
                clrscr();
                s1.front();
                break;
            
            case 4:
                clrscr();
                s1.back();
                break;
            
            case 5:
                clrscr();
                s1.Size();
                break;
            
            case 6:
                clrscr();
                s1.empty();
                break;
            
            case 7:
                clrscr();
                s1.display();
                break;

            default : 
                cout << "Invalid";
                break;
        }
        

    }



    return 0;
}