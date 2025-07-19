/*
    7.Design a class called Matrix with member variables for a 2D array and dimensions. Include functions to add and multiply two matrices.
      Instantiate two Matrix objects, perform the operations, and print the results.
*/
#include<iostream>
using namespace std;


class Matrix{

  private : 
    int r1,c1;
    int **arr , **result = nullptr;

public :

    // input
    void setdata()
    {
      cout << "\nEnter row of array 1 : ";
      cin >> r1;

      cout << "Enter Column of array 1 : ";
      cin >> c1;

      arr = new int*[r1];
      for (int i = 0; i < r1; ++i) {
          arr[i] = new int[c1];
      }

      cout << "\nEnter " << r1*c1 << " Element : " << endl;
      for(int i = 0 ; i < r1 ; i++)
      {
        for(int j = 0 ; j < c1 ; j++)
        {
          cin >> arr[i][j];
        }
      }
      
    }

    // addition
    void add(Matrix &other)
    {

      if(r1 == other.r1 && c1 == other.c1)
      { 
        // create result arr  
        result = new int*[r1];
        for (int i = 0; i < r1; ++i) {
            result[i] = new int[c1]();
        }

        // addition
        for(int i = 0 ; i < r1 ; i++)
        {
          for(int j = 0 ; j < c1 ; j++)
          {
            result[i][j] = arr[i][j] + other.arr[i][j];
          }
        }
          
          // output
          cout << endl << "Addition is : " << endl << endl;
          display(r1,c1);
      }
      else
      {
        cout << "\nNot able to Addition..." << endl;
      }
      
    }

    // multiplication
    void multiply(Matrix &other)
    {
      if(c1 == other.r1 )
      { 
        // create result arr  
        result = new int*[r1];
        for (int i = 0; i < r1; ++i) {
            result[i] = new int[other.c1]();
        }

        // multiplication
        for(int i = 0 ; i < r1 ; i++)
        {
          for(int j = 0 ; j < other.c1 ; j++)
          {
            for(int k = 0 ; k < c1 ; k++)
            {
              result[i][j] += arr[i][k] * other.arr[k][j];
            }
          }
        }
          
          // output
          cout << endl << "Multiplication is : " << endl << endl;
          display(r1,other.c1);
      }
      else
      {
        cout << "\nNot able to Addition..." << endl;
      }
      
    }

    void display(int row , int column)
    {
        for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < column ; j++)
            {
                cout << result[i][j] << " ";
            }
            cout<<endl;
        }
    }


    // desctructor
    ~Matrix()
    {
      for (int i = 0; i < r1; ++i) {
            delete[] arr[i];
            if (result) {
                delete[] result[i];
            }
        }
        delete[] arr;
        delete[] result;
    }

};


int main()
{
  Matrix m1;
  Matrix m2;

  m1.setdata();
  m2.setdata();
  m1.add(m2);
  m1.multiply(m2);

  return 0;
}

