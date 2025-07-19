/*
    20.Design a class called CurrencyConverter with member functions to convert currency between different countries. Implement the 
    conversion rates using a map or an array. Instantiate a CurrencyConverter object, perform currency conversions, and print the results.
*/

#include<iostream>
using namespace std;

# define size 5
# define clrscr();system("cls")

class CurrencyConverter{

    private :
        string Cname; 
        double Camount; 

        struct storedata{
            string countryName;
            double Rate;
        }s1[size];

        void Store();

    public:

        CurrencyConverter()
        {
            Store();
            Cname = ""; 
            Camount = 0; 
        }

        void Converter()
        {
            cout << "Enter INR Amount : ";
            cin >> Camount;
            
            cout << "Enter country name to Convert Amount [ EUR | USD | CAD | CNY | AUD ] : ";
            cin >> Cname;

            int found = 0;

            for(int i = 0 ; i < size ; i++)
            {
                if(s1[i].countryName.compare(Cname) == 0)
                {
                    cout << "\n--------------------------------------------------" << endl;
                    cout << Camount << " INR in " << Cname << " = " << Camount * s1[i].Rate << endl; 
                    cout << "--------------------------------------------------\n" << endl;
                    found = 1;
                }
            }

            if(found == 0)
            {
                cout << "\n--------------------------------------------------" << endl;
                cout << "Record Not in Data base..." << endl;
                cout << "--------------------------------------------------\n" << endl;
            }

        }


};


void CurrencyConverter:: Store(){

    s1[0].countryName = "EUR";
    s1[0].Rate = 0.011;
    s1[1].countryName = "USD";
    s1[1].Rate = 0.0122;
    s1[2].countryName = "CAD";
    s1[2].Rate = 0.0161;
    s1[3].countryName = "CNY";
    s1[3].Rate = 0.0872;
    s1[4].countryName = "AUD";
    s1[4].Rate = 0.018;

};


int main()
{

    CurrencyConverter c1;
    int choice;

    while(1)
    {   
        cout << "\n\n1.Currency Convert : ";
        cout << "\n2.Exit : ";
        cout << "\n\nEnter Choice no. : ";
        cin >> choice;

        if(choice == 2)
        {
            break;
        }

        switch(choice)
        {

            case 1:
                clrscr();
                c1.Converter();
                break;

            default : 
                clrscr();
                cout << "Invalid..." << endl; 
                break;
        }


    }

    return 0;
}
