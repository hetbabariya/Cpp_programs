// 6.Calculate the area and perimeter of a rectangle given its length and width.

#include<iostream>
using namespace std;

// function
float area(float , float);
float perimeter(float , float);

int main(void)
{

    float length , width;

    cout << "Enter length : ";
    cin >> length;

    cout << "Enter width : ";
    cin >> width;

    cout << "\narea is : " << area(length,width) << endl;
    cout << "perimeater is : " << perimeter(length,width );
    
    return 0;
}

// function
float area(float l, float w)
{
    return l * w;
}

float perimeter(float l, float w)
{
    return 2 * (l + w);
}