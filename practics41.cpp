/*
    4. Create a class called Employee with member variables for name, id and salary. Include get and set functions for each variable.
        Instantiate an Employee object, set the values using the set functions, and print the values using the get functions. 
*/


#include<iostream>
using namespace std;

// create class
class Employee{

    private :
        string name;
        int id;
        double salary;

    public :

    // setter
    void setname(string name)
    {
        this->name = name;
    }

    void setid(int id)
    {
        this->id = id;
    }

    void setsalary(double salary)
    {
        this->salary = salary;
    }
    
    // getter
    string getname()
    {
        return this->name;
    }

    int getid()
    {
        return this->id;
    }

    double getsalary()
    {
        return this->salary;
    }

};

int main()
{

    Employee e1;

    e1.setid(101);
    e1.setname("Het");
    e1.setsalary(100000);

    cout << "Id : " << e1.getid() << endl;
    cout << "Name : " << e1.getname() << endl;
    cout << "Salary : " << e1.getsalary() << endl;


    return 0;
}
