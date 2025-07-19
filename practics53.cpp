/*
    8.Create a class called BankCustomer with member variables for customer name, account number, and balance. Implement a function to 
    transfer money to another customer’s account. Instantiate two BankCustomer objects, perform the transfer, and print the updated balances.
*/


#include<iostream>
using namespace std;

// create class
class BankCustomer{

    private :
        int AC_no;
        string AH_name;
        int AC_balance;

    public :

        // create account
        void setdata()
        {            
            cout << "\nenter Ac_no [5 Digits]: ";
            cin >> this->AC_no;

            cout << "Enter AccountHolder name : ";
            cin >> this->AH_name;

            cout << "Enter Account Balance : ";
            cin >> this->AC_balance;

            cout << "\n-------------------------------------" << endl;  
            cout << "Your Account Details set successfuly..." << endl;
            cout << "-------------------------------------" << endl;  

        }

        void transfer(BankCustomer &b2)
        {
            double t_Amount;

            cout << "\nEnter Transfer Amount : ";
            cin >> t_Amount;

            this->AC_balance -= t_Amount;
            b2.AC_balance += t_Amount ;
            
            cout << "\n-------------------------------------" << endl;  
            cout << "Your Money transfer successfuly..." << endl;
            cout << "-------------------------------------" << endl;  
        }


        void displaydata()
        {
            cout << "\n-------------------------------------" << endl;  
            cout << "\t\tAccount Details" << endl;
            cout << "-------------------------------------" << endl;

            cout << "Account numebr  : " << AC_no  << endl;
            cout << "Account holder name : " << AH_name  << endl;
            cout << "Account Balance : " << AC_balance  << endl;
        }

};



// main()
int main()
{
    // create obj
    BankCustomer b1 , b2;

    b1.setdata();
    b2.setdata();
    b1.transfer(b2);
    b1.displaydata();
    b2.displaydata();


    return 0;
}