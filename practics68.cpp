#include<iostream>
using namespace std;

class A{

    private :

        int a = 10;

    public :

        void displayA(){
            cout << "A = " << a << endl;
        }

};


class B : public A{

    private :

        int b = 20;

    public :

        void displayB(){
            cout << "B = " << b << endl;
        }

};

class C : public A{

    private :

        int c = 30;

    public :

        void displayC(){
            cout << "C = " << c << endl;
        }
};

class D : public B , public C{

     private :

        int d = 40;

    public :

        void displayD(){
            cout << "D = " << d << endl;
        }

};



int main()
{
    D d;

    d.B::displayA();
    d.C::displayA();
    d.displayB();
    d.displayC();
    d.displayD();

    return 0;
}