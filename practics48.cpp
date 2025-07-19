/*
    4.Create a class called Stack with member functions to push, pop, and display elements. Implement the stack using an array or a 
    linked list. Instantiate a Stack object, perform push and pop operations, and display the elements in the stack.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

# define size 10
#define clrscr(); system("cls");

class Stack{

    private :
        int arr[size];
        int IDX;

    public :

    Stack()
    {
        IDX = 0;
    }

    // push()
    void push(int element)
    {   

        if(IDX > size-1)
        {
            cout << "Stack is overflow..." << endl;
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
            cout << "Stack is Empty..." << endl;
            IDX = 0;
        }
        else
        {      
            cout <<"-----------------------------------------" << endl;
            cout <<  "Element "<< arr[IDX] <<" is Poped... " << endl;
            cout << "-----------------------------------------" << endl;
        }

    }
    
    // top()
    void top()
    {   
        if(IDX <= 0)
        {
            cout <<"------------------------" << endl;
            cout << "Stack size is : Empty"<< endl; 
            cout <<"--------------------------" << endl;
            IDX = 0;
        }
        else
        {      
            cout << "\nStack is : " << endl; 
            cout <<"------------------------" << endl;
            for(int i = IDX-1 ; i >= 0 ; i--)
            {                
                cout << arr[i] << endl;
            }
            cout <<"--------------------------" << endl;
        }

    }
    
    // size()
    void Size()
    {   
        cout <<"------------------------" << endl;
        cout << "Stack size is : " << IDX<< endl; 
        cout <<"--------------------------" << endl;

    }
    
    // empty()
    void empty()
    {   
        if(IDX <= 0)
        {
            cout <<"------------------------" << endl;
            cout << "Stack size is : Empty"<< endl; 
            cout <<"--------------------------" << endl;
        }
        else
        {
            cout <<"------------------------" << endl;
            cout << "Stack size is : Not Empty"<< endl; 
            cout <<"--------------------------" << endl;
        }
    }

    // display()
    void display()
    {
        if(IDX <= 0)
        {
            cout <<"------------------------" << endl;
            cout << "Stack size is : Empty"<< endl; 
            cout <<"--------------------------" << endl;
            IDX = 0;
        }
        else
        {
            cout << "\nStack is : " << endl; 
            cout <<"------------------------" << endl;
            for(int i = 0 ; i < IDX ; i++)
            {                
                cout << arr[i] << endl;
            }
            cout <<"--------------------------" << endl;
        }

        
    }

};


int main()
{

    Stack s1;
    int n , ele;

    while(1)
    {
        cout << "\n1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. top()" << endl;
        cout << "4. size()" << endl;
        cout << "5. empty()" << endl;
        cout << "6. Display" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter number : ";
        cin >> n;

        if(n == 7)
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
                s1.top();
                break;
            
            case 4:
                clrscr();
                s1.Size();
                break;
            
            case 5:
                clrscr();
                s1.empty();
                break;
            
            case 6:
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