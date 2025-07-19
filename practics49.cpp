
/*
    3.Design a class called Bank with member variables for account number, account holder name, balance, and interest rate.
      Implement a function to calculate the interest for a given period. Instantiate a Bank object, calculate interest, and display the 
      final balance.
*/

#include<iostream>
using namespace std;

// create class
class Bank{

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

            cout << "\n----------------------------" << endl;  
            cout << "Your Account Details set successfuly..." << endl;

        }

        double calaculateInterset()
        {
            return ((AC_balance * interestRate * interestperiod) / 100);
        }


        void displayBalance()
        {
            cout << "\nFinal Balance is : " << AC_balance + calaculateInterset() << endl;
            cout << "interset is : " << calaculateInterset() << endl;
        }

};



// main()
int main()
{
    // create obj
    Bank b1;

    b1.setdata();
    b1.calaculateInterset();
    b1.displayBalance();


    return 0;
}
