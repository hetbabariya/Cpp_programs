/*
    13.Design a class called Inventory with member variables for product name, quantity, and price. Include functions to update the
     quantity and calculate the total value of the inventory. Instantiate an Inventory object, perform updates, and print the total value.
*/


#include<iostream>
using namespace std;

// create class
class Inventory{

    private :
        string productName;
        int productQuantity;
        double productPrice;

    public :

        // create account
        void setdata()
        {            
            cout << "\nenter Product Name: ";
            cin >> this->productName;

            cout << "Enter Product Quantity : ";
            cin >> this->productQuantity;

            cout << "Enter Product price : ";
            cin >> this->productPrice;

            cout << "\n-------------------------------------" << endl;  
            cout << "Your Product Details set successfuly..." << endl;
            cout << "-------------------------------------" << endl;  

        }

        void update()
        {
            cout << "\nEnter New Quantity : ";
            cin >> productQuantity;
            
            cout << "\n-------------------------------------" << endl;  
            cout << "Your Quantity Update successfuly..." << endl;
            cout << "-------------------------------------" << endl;  
        }


        void total()
        {
            double Total = productPrice * productQuantity ;
            cout << "\n-------------------------------------" << endl;  
            cout << "Total Value of Inventory is : " << Total << endl;
            cout << "-------------------------------------" << endl;
        }

};



// main()
int main()
{
    // create obj
    Inventory i1;

    i1.setdata();
    i1.update();
    i1.total();

    return 0;
}