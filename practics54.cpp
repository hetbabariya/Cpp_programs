/*
    9.Design a class called RectangleArray with member variables for an array of Rectangle objects and its size. Include functions to 
        find the rectangle with the maximum area and calculate the total area of all rectangles. Instantiate a RectangleArray object,
        populate it, and perform the calculations.
*/

#include<iostream>
using namespace std;

class RectangleArray{

    private :

        struct rectangle{
            double length;
            double width;
        };

        int n ;
        double *storeArea , totalarea = 0;
        rectangle* arr;

        void storearea();

    public :

        // setdata
        void setdata()
        {
            
            cout << "Enter size of array : ";
            cin >> n;

            arr = new rectangle[n];
            storeArea = new double[n];

            cout << "Enter "<< n <<" Elements : ";
            for(int i = 0 ; i < n ; i++)
            {
                cout << "\nEnter "<< i+1 <<" length : ";
                cin >> arr[i].length; 
                
                cout << "Enter "<< i+1 <<" Width : ";
                cin >> arr[i].width; 
            }

            cout << endl << "Data Set successfuly.." << endl << endl;
            storearea();

        }        

        // calaculate total area
        double CaltotalArea()
        {
            for(int i = 0 ; i < n ; i++)
            {
                totalarea += storeArea[i];
            }

            return totalarea;
        }

        // find maximum area
        double findMax()
        {
            double Max = storeArea[0];
            for(int i = 0 ; i < n ; i++)
            {
                if(storeArea[i] > Max)
                {
                    Max = storeArea[i];
                }
            }

            return Max;
        }

        ~RectangleArray()
        {
            delete[] arr ;
            delete[] storeArea ;
        }

};

void RectangleArray :: storearea()
{
    for(int i = 0 ; i < n ; i++)
    {
        storeArea[i] = arr[i].length * arr[i].width;
    }
}

int main()
{
    RectangleArray r1;

    r1.setdata();
    cout << endl <<"Total area : "<< r1.CaltotalArea() << endl;
    cout << endl <<"Maximum area : "<< r1.findMax() << endl;
    





    return 0;
}