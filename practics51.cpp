/*
    6.Create a class called TimeConverter with member variables for hours and minutes. Implement functions to convert time from 12-hour 
        format to 24-hour format and vice versa. Instantiate a TimeConverter object, convert time, and print the result.
*/



#include<iostream>
#include<stdlib.h>
using namespace std;

#define clrscr(); system("cls");

class TimeConverter{

    private :
        int Hours;
        int Minutes;
        int Seconds;
        string period;

    public :

        void setdata()
        {
            cout << "\nEnter Hours : ";
            cin >> this->Hours; 

            cout << "Enter Minutes : ";
            cin >> this->Minutes; 
            
            cout << "Enter seconds : ";
            cin >> this->Seconds; 

        }

        void convtInto24Hours()
        {
            setdata();

            if(Hours <= 12)
            {
                cout << "Enter AM | PM : ";
                cin >> this->period; 
            }

            if(Hours > 24)
            {
                cout << "Invalid...";
            }
            else
            {
                if(Hours < 12)
                {


                    if(period == "AM")
                    {
                        cout << "\n-----------------------------------------" << endl;
                        cout << "Into 24 Hour Formate Time is : " << Hours  << " : "  << Minutes << " : " << Seconds << " AM " <<  endl;
                        cout << "-----------------------------------------" << endl;
                    }
                    else if(period == "PM")
                    {
                        cout << "\n-----------------------------------------" << endl;
                        cout << "Into 24 Hour Formate Time is : " << Hours + 12 << " : "  << Minutes << " : " << Seconds << " PM "<<  endl;
                        cout << "-----------------------------------------" << endl;
                    }
                }
                else
                {
                    if(Hours == 12)
                    {
                        if(period == "AM")
                        {
                            cout << "\n-----------------------------------------" << endl;  
                            cout << "Into 24 Hour Formate Time is : " << Hours - 12 << " : "  << Minutes << " : " << Seconds << " AM "<<  endl;
                            cout << "-----------------------------------------" << endl;
                        }
                        else
                        {
                            cout << "\n-----------------------------------------" << endl;
                            cout << "Into 24 Hour Formate Time is : " << Hours << " : "  << Minutes << " : " << Seconds << " PM "<<  endl;
                            cout << "-----------------------------------------" << endl;
                        }
                    }
                    

                }
            }
            
        }


        void convtInto12Hours()
        {   
            setdata();

            if(Hours == 24)
            {
                Hours = 0; 
            }

            if(Hours > 0 && Hours < 12)
            {
                cout << "\n-----------------------------------------" << endl;
                cout << "Into 12 Hour Formate Time is : " << Hours  << " : "  << Minutes << " : " << Seconds << " AM " <<  endl;
                cout << "-----------------------------------------" << endl;
            }
            else
            {
                if(Hours == 0)
                {
                    cout << "\n-----------------------------------------" << endl;
                    cout << "Into 12 Hour Formate Time is : " << Hours+12  << " : "  << Minutes << " : " << Seconds << " AM " <<  endl;
                    cout << "-----------------------------------------" << endl;
                }
                else
                {
                    if(Hours == 12)
                    {
                        cout << "\n-----------------------------------------" << endl;
                        cout << "Into 24 Hour Formate Time is : " << Hours << " : "  << Minutes << " : " << Seconds << " PM "<<  endl;
                        cout << "-----------------------------------------" << endl;
                    }
                    else
                    {
                        cout << "\n-----------------------------------------" << endl;
                        cout << "Into 12 Hour Formate Time is : " << Hours - 12  << " : "  << Minutes << " : " << Seconds << " PM " <<  endl;
                        cout << "-----------------------------------------" << endl;
                    }

                }
                

            }
        }



        

};


int main()
{
    TimeConverter t1;
    int n;

    while(1)
    {
        cout << "\n1. Convert into 12 hours Formate" << endl;
        cout << "2. Convert into 24 hours Formate" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter number : ";
        cin >> n;

        if(n == 3)
        {
            break;
        }

        switch(n)
        {
            case 1:
                clrscr();
                t1.convtInto12Hours();
                break;

            case 2:
                clrscr();
                t1.convtInto24Hours();
                break;

            default : 
                cout << "Invalid";
                break;
        }
        

    }



    return 0;
}