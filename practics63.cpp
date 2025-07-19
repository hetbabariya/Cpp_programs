/*
    17.Design a class called BankAccount with member variables for account number, account holder name, balance, and interest rate.
    Implement functions to calculate interest and print a bank statement for a given period. Instantiate a BankAccount object, perform 
    calculations, and print the statement.
*/


#include<iostream>
using namespace std;

// create class
class BankAccount{

    private :
        int AC_no;
        string AH_name;
        int AC_balance;
        double interestRate;
        double interestperiod;

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

            cout << "Enter interest rate : ";
            cin >> this->interestRate;

            cout << "Enter interest period [year] : ";
            cin >> this->interestperiod;

        }

        double calaculateInterset()
        {
            return ((AC_balance * interestRate * interestperiod) / 100);
        }


        void displayBalance()
        {
            cout << "\n\nAc_no\tName\tAc_blance\tinterest" << endl;
            cout << "-----------------------------------------" << endl; 
            cout << AC_no  << "\t" << AH_name << "\t" <<  AC_balance + calaculateInterset() << "\t\t" << calaculateInterset() << endl;
            cout << "-----------------------------------------\n" << endl;
        }

};



// main()
int main()
{
    // create obj
    BankAccount b1;

    b1.setdata();
    b1.calaculateInterset();
    b1.displayBalance();


    return 0;
}