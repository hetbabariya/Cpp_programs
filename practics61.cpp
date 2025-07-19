/*
    15.Design a class called EmployeeList with member variables for an array of Employee objects and its size. Include functions to find
    the employee with the highest salary and calculate the average salary of all employees. Instantiate an EmployeeList object, populate it, and perform the calculations.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

# define clrscr(); system("cls");

#define size  5

// create class
class EmployeeList{

    private :
        
        struct employee
        {
            string name;
            int id;
            double salary;
        }emp[size];

        int IDX;

    public :

        EmployeeList()
        {
            IDX = 0;

            emp[0].name = "";
            emp[0].id = 0;
            emp[0].salary = 0;

        }

        void setdata()
        {   
            cout << "Enter Employee Name : ";
            cin >> emp[IDX].name;

            cout << "Enter Employee id : ";
            cin >> emp[IDX].id;

            cout << "Enter Salary : ";
            cin >> emp[IDX].salary;

            IDX++;

            cout << "\n-----------------------------------------" << endl;
            cout << "Data set successfuly..." << endl;
            cout << "-----------------------------------------" << endl;
        }


        double highestSalary()
        {
            double high = emp[0].salary ;
            int EIDX = 0;
            for(int i = 0 ; i < IDX ; i++)
            {
                if(emp[i].salary > high)
                {
                    high = emp[i].salary;
                    EIDX = i;
                } 

            }
            cout << "\n-----------------------------------------" << endl;
            cout << "Employee Name : " << emp[EIDX].name << endl;
            cout << "Highest Salary is : " << high << endl;
            cout << "-----------------------------------------" << endl;
        }
        
        double avrageSalary()
        {
            double sum = 0 , AVG = 0;
            for(int i = 0 ; i < IDX ; i++)
            {
                sum += emp[i].salary;
            }

            AVG =  sum / IDX;

            cout << "\n-----------------------------------------" << endl;
            cout << "Avrage Salary is : " << AVG << endl;
            cout << "-----------------------------------------" << endl;
        }

};

int main()
{
    EmployeeList e1;
    int n;

    
    while(1)
    {
        cout << "\n1. setdata " << endl;
        cout << "2. highest Salary " << endl;
        cout << "3. avrage Salary " << endl;
        cout << "4. Exit" << endl;
        cout << "Enter number : ";
        cin >> n;

        if(n == 4)
        {
            break;
        }

        switch(n)
        {
            case 1:
                clrscr();
                e1.setdata();
                break;

            case 2:
                clrscr();
                e1.highestSalary();
                break;
            case 3:
                clrscr();
                e1.avrageSalary();
                break;

            default : 
                cout << "Invalid";
                break;
        }
        

    }


    return 0;
}
