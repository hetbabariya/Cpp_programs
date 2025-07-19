/*
    6. Create a class called Complex with member variables for real and imaginary parts of a complex number. 
        Include functions to perform complex number arithmetic. Instantiate two Complex objects and test the arithmetic functions.
*/


#include<iostream>
using namespace std;

// create class
class Complex{

    private :

        double real;
        double imaginary;

    public :

    Complex()
    {
        this->real = 0;
        this->imaginary = 0;
    }

    Complex(double real , double imaginary)
    {
        this->real = real;
        this->imaginary= imaginary ;
    }

    Complex add(Complex& other) 
    {
        real += other.real,
        imaginary += other.imaginary;
        return *this;
    }

    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
        

};

int main()
{

    Complex c1(2.5 , 5);
    Complex c2(3,7.1);
    

    cout << "Complex number 1 :   ";
    c1.display();

    cout << "Complex number 2 :   ";
    c2.display();

    cout << "\nSum : ";
    c1.add(c2);
    c1.display();
    


    return 0;
}
