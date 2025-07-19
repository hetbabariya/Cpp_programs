/*
    Problem: Create a program that calculates the total cost of items in a shopping cart, including taxes and discounts.
    Real-life Use Case: Simulating an online shopping application.
*/

#include<iostream>
#include<string.h>
using namespace std;

#define clrscr(); system("cls");

// create class
class shopCart{

    private:

        typedef struct billDetail
        {
            string iteamName;
            int iteamqty;
            int iteamprice;
            int totalPrice; 
        }bd;

        bd bill[10];
        int totalAmt = 0 , IDX = 0;

    public :


        // getdata from user
        void getdata()
        {
            int iteam , quantity , value = 0;

            // display product details
            cout << "\n\n1.  Maggi      - 50 " << endl;
            cout << "2.  Biscuit    - 30 " << endl;
            cout << "3.  Shirt      - 300 " << endl;
            cout << "4.  pant       - 500 " << endl;
            cout << "5.  Bottle     - 250 " << endl;
            cout << "6.  Tv         - 25000 " << endl;
            cout << "7.  Toy        - 300 " << endl;
            cout << "8.  Laptop     - 50000 " << endl;
            cout << "9.  speaker    - 2500 " << endl;
            cout << "10. Grocery    - 250 " << endl;
            cout << "-----------------------" << endl;
            cout << "Genrate Bill Press[0] " << endl;
            cout << "\n-----------------------" << endl;

            while (iteam != 0)
            {
                cout << "\nEnter Product No. : ";
                cin >> iteam;

                if(iteam == 0)
                {
                    totalbill();
                    break;
                }

                cout << "Enter Product Quantity : ";
                cin >> quantity;


                switch (iteam)
                {
                    case 1 :
                        value = 50 * quantity;
                        total(value);

                        billstore("Meggi" , quantity , 50 , value);
                        break;
                    case 2 :
                        value = 30 * quantity;
                        total(value);
                        billstore("Biscuit" , quantity , 30 , value);
                        break;
                    case 3 :
                        value = 300 * quantity;
                        total(value);
                        billstore("Shirt" , quantity , 300 , value);
                        break;
                    case 4 :
                        value = 500 * quantity;
                        total(value);
                        billstore("pant" , quantity , 500 , value);
                        break;
                    case 5 :
                        value = 250 * quantity;
                        total(value);
                        billstore("Bottle" , quantity , 250 , value);
                        break;
                    case 6 :
                        value = 25000 * quantity;
                        total(value);
                        billstore("T.V" , quantity , 25000 , value);
                        break;
                    case 7 :
                        value = 300 * quantity;
                        total(value);
                        billstore("Toy" , quantity , 300 , value);
                        break;
                    case 8 :
                        value = 50000 * quantity;
                        total(value);
                        billstore("Laptop" , quantity , 50000 , value);
                        break;
                    case 9 :
                        value = 2500 * quantity;
                        total(value);
                        billstore("Speaker" , quantity , 2500 , value);
                        break;
                    case 10 :
                        value = 250 * quantity;
                        total(value);
                        billstore("Grocery" , quantity , 250 , value);
                        break;
                    
                    default:
                        printf("------- Enter valid item No. ------\n");
                        break;
                }

                IDX++;  

            }
        
        }

        
        // calculate total amount
        int total(int value)
        {
            return totalAmt += value;
        }

        // store structure values
        void billstore(string name , int qty , int price , int value)
        {
            bill[IDX].iteamName = name;
            bill[IDX].iteamqty = qty;
            bill[IDX].iteamprice = price;
            bill[IDX].totalPrice = value;
        }

        // calculate tax;
        int caltax(int totalAmt , int taxAmt)
        {
            return totalAmt * taxAmt / 100;
        }
        
        // calaculate discount
        int caldiscount(int totalAmt , int discountAmt)
        {
            return totalAmt * discountAmt / 100;
        }
        
        // display bill
        void totalbill()
        {
            clrscr();

            cout << "Product\t\tQuantity\tPrice\t\tTotalprice " << endl;
            cout << "------------------------------------------------------------ "<< endl;

            for(int j = 0 ; j < IDX ; j++)
            {
                cout << bill[j].iteamName <<"\t\t" << bill[j].iteamqty <<"\t\t" << bill[j].iteamprice << "\t\t" << bill[j].totalPrice << endl;
            }

            // int totaldis = totalAmt - caldiscount(totalAmt , 20);
            // int totaltax = caltax(totaldis , 18 );
            // int totalpay =  totaldis + totaltax;
            int totaltax = totalAmt + caltax(totalAmt , 18 );
            int totaldis = caldiscount(totaltax , 20);
            int totalpay =  totaltax - totaldis;
            cout << "----------------------------------------------------------------- " << endl;
            cout << "---------------- Total Amount tax is      : "<< caltax(totalAmt , 18 ) <<"/-  ------------ " << endl;
            cout << "---------------- Total Amount Discount is : "<< caldiscount(totaltax , 20) <<"/-  ----------- " << endl;
            cout << "---------------- Total Amount is          : "<< totalpay <<"/-  -----------" << endl;
            cout << "-----------------------------------------------------------------" << endl;
        }

};



int main()
{
    // create obj
    shopCart s1;

    s1.getdata();
        
    return 0;
}