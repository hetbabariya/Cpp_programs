/*
    Problem: Develop a program to simulate a basic ATM machine with withdrawal, deposit, and balance check functionalities.
    Real-life Use Case: Simulating an ATM system.
*/

#include<iostream>
using namespace std;

# define clrscr();system("cls");

// create class
class Atm{

    private :
        struct BankAccount{
            int AC_no;
            string AH_name;
            string AC_type;
            int AC_balance;

        }Bankdetails[10];

        int IDX = 0;

    public :

        // create account
        void CreateAccount()
        {            
            cout << "\nenter Ac_no [5 Digits]: ";
            cin >> Bankdetails[IDX].AC_no;

            cout << "Enter AccountHolder name : ";
            cin >> Bankdetails[IDX].AH_name;
            
            cout << "Enter Account type[ Saving / Cuurent] : ";
            cin >> Bankdetails[IDX].AC_type;

            cout << "Enter Account Balance : ";
            cin >> Bankdetails[IDX].AC_balance;

            cout << "\n----------------------------" << endl;  
            cout << "\nYou Account is Created...\n\n" << endl;

            IDX++;
        }


        // deposit 
        void Deposit(){

            int AcNo , depoAmt , found = 0;

            cout << "Enter Account Number : ";
            cin >> AcNo ;

            for(int i = 0 ; i < IDX ; i++)
            {
                if(AcNo == Bankdetails[i].AC_no)
                {
                    cout << "How much you want to Deposite : ";
                    cin >> depoAmt;

                    Bankdetails[i].AC_balance += depoAmt;
                    found = 1;
                }
            }

            if(found == 1)
            {
                cout << "\n----------------------------------\n";
                cout << "You Money Deposite SuccessFuly...\n\n";
            }
            else
            {
                cout << "\n----------------------------------\n";
                cout << "You Account number is Wrong...\n\n";
            }
        

        }



        // Withdraw

        void Withdraw(){

            int AcNo , withdAmt , found = 0;

            cout << "Enter Account Number : ";
            cin >> AcNo ;

            
            for(int i = 0 ; i < IDX ; i++)
            {
                if(AcNo == Bankdetails[i].AC_no)
                {
                    cout << "How much you want to Withdraw : ";
                    cin >> withdAmt;


                    if(Bankdetails[i].AC_balance >= withdAmt)
                    {
                            Bankdetails[i].AC_balance -= withdAmt;
                            found = 1;
                    }

                }
            }

            if(found == 1)
            {
                cout << "\n----------------------------------\n";
                cout << "You Money Withdraw SuccessFuly...\n\n";
            }
            else
            {
                cout << "\n----------------------------------\n";
                cout << "Something Wrong...\n\n";
            }

        }

        // display details

        void DisplayDetails(){

            int AcNo , found = 0;

            cout << "Enter Account Number : ";
            cin >> AcNo ;

            for(int i = 0 ; i < IDX ; i++)
            {
                if(AcNo == Bankdetails[i].AC_no)
                {
                    cout << "\n\n\t\tBank Details : \n";
                    cout << "-------------------------------------------------------\n";
                    cout << "-------------------------------------------------------\n\n\n";

                    cout << "Ac_no\t\tAH_name\t\tA_type\t\tBalance\n";
                    cout << "--------------------------------------------------------\n\n";

                    cout << Bankdetails[i].AC_no << "\t\t" << Bankdetails[i].AH_name << "\t\t" << Bankdetails[i].AC_type << "\t\t" << Bankdetails[i].AC_balance << endl;
                    found = 1;
                }
            }

            if(found == 0)
            {
                cout << "\n----------------------------------\n" ;
                cout << "You Account number is Wrong...\n\n" ;
            }   
        }



        // Administration

        void BankDetails(){

            // password is : 1234

            int AcNo , found = 0 , password = 1234;

            cout << "Enter Password : " ;
            cin >> AcNo ;


            if(AcNo == password ){

                cout << "\n\n\t\tBank Details : \n";
                cout << "--------------------------------------------------------\n";
                cout << "--------------------------------------------------------\n\n\n";

                cout << "Ac_no\t\tAH_name\t\tA_type\t\tBalance\n";
                cout << "--------------------------------------------------------\n\n";

                for(int i = 0 ; i < IDX ; i++)
                {
                    cout << Bankdetails[i].AC_no << "\t\t" << Bankdetails[i].AH_name << "\t\t" << Bankdetails[i].AC_type << "\t\t" << Bankdetails[i].AC_balance << endl;
                }
                found = 1;
            }
                    
            if(found == 0)
            {
                cout << "\n----------------------------------\n";
                cout << "Something Wrong ...\n\n";
            }
        }

};

// main()
int main()
{
    // create obj
    Atm a1;

    int choice;

    while (1)
    {
        cout << "\n\n1.Create Account : ";
        cout << "\n2.Deposite : ";
        cout << "\n3.Withdraw : ";
        cout << "\n4.Account Details : ";
        cout << "\n5.Bank Details : ";
        cout << "\n6.Exit : ";
        cout << "\n\nEnter Choice no. : ";
        cin >> choice;

        if(choice == 6)
        {
            break;
        }

        switch(choice)
        {
            case 1:
                clrscr();
                a1.CreateAccount();
                break;

            case 2:
                clrscr();
                a1.Deposit();
                break;

            case 3:
                clrscr();
                a1.Withdraw();
                break;

            case 4:
                clrscr();
                a1.DisplayDetails();
                break;

            case 5:
                clrscr();
                a1.BankDetails();
                break;

            default : 
                printf("Invalid..."); 
        }
    }

    return 0;
}
