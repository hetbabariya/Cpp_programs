// 8.Determine the roots of a quadratic equation given the coefficients.

#include<iostream>
#include<cmath>
using namespace std;

void rootsOfquadratic(float,float,float);

int main()
{
    float a,b,c;

    cout << "Enter a , b and c : ";
    cin >> a >> b >> c;

    rootsOfquadratic(a,b,c);


    return 0;
}

// function
void rootsOfquadratic(float a , float b , float c)
{
    
    float discriminant , x1 ,x2 ,realPart , imaginaryPart ;

    // find discriminant
    discriminant = b*b - 4*a*c;


    if(discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if(discriminant == 0)
    {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;

    }
    else
    {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    } 
}