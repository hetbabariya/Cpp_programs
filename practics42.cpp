/*
    5. Create a class called Calculator with member functions for add, subtract, multiply and divide. 
        The functions should take two integers as parameters. Instantiate a Calculator object and use it to perform simple calculations.
*/


#include<iostream>
using namespace std;

// create class
class Calculator{

    public :

        double add(double a, double b) {
            return a + b;
        }

        double subtract(double a, double b) {
            return a - b;
        }

        double multiply(double a, double b) {
            return a * b;
        }

        double divide(double a, double b) {
            return a / b;
        }

};


int main()
{
    // create obj
    Calculator c1;

    int choice;
    float n1 , n2 ;

    while(choice != 5)
    {
        cout << "\n\n1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter number : ";
        cin >> choice; 

        if(choice == 5) break;

        cout << "\n\nEnter n1 : ";
        cin >> n1;

        cout << "Enter n2 : ";
        cin >> n2;
     
     
        switch(choice)
        {
            case 1 :
                cout << "\nAddition : "<< n1 << " + " << n2 << " = " << c1.add(n1 , n2) ;  
                cout << "\n----------------------------";
                break;
            
            case 2 :
                cout << "\nSubtraction : "<< n1 << " - " << n2 << " = " << c1.subtract(n1 , n2 );  
                cout << "\n----------------------------";
                break;
            
            case 3 :
                cout << "\nmultiplication : "<< n1 << " * " << n2 << " = " << c1.multiply(n1 , n2) ;  
                cout << "\n----------------------------";
                break;
          
            case 4 :

                if(n2 == 0 )
                {
                    cout << "invalid...";
                    break;
                }

                cout << "\ndivision : "<< n1 << " / " << n2 << " = " << c1.divide(n1 , n2) ;  
                cout << "\n----------------------------";
                break;
            
            case 5 :
                break;

            default : 
                cout << "Invalid...";
        }
    }

    return 0;
}