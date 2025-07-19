/*
    8. Create a class called Student with member variables for name, id and an array of test scores. 
        Include functions to set the name and id, add test scores, and calculate the average test score. 
        Instantiate a Student object, populate its data, and print the average test score.
*/

#include<iostream>
using namespace std;

class Student{

    private : 
        string name;
        int id;
        double *test_scores;
        float sum = 0;

        
    public:

        Student()
        {
            string name= "";
            int id = 0;
            test_scores = new double[5];
        }

        void setdata(string name , int id , double *test_score)
        {   
            this->name = name;
            this->id = id;
            this->test_scores = test_score;
        }

        double avg()
        {
            for(int i = 0 ; i < 5 ; i++)
            {
                sum += *(test_scores + i);
            }     

            return sum / 5;   
        }

        void getdata()
        {
            cout << "\n----------------------------"<< endl;
            cout << "name : " << this->name << endl;
            cout << "id : " << this->id << endl;
            cout << "Test Score : ";
            for(int i = 0 ; i < 5 ; i++)
            {
                cout << *(test_scores + i) << " | ";
            }
            cout << "\nAverage : " << this->avg() << endl;
            cout << "----------------------------"<< endl;
        }

        ~Student()
        {
            delete [] test_scores;
        }

};

int main()
{
    //creating student objects
    Student s1;

    double arr[5] = {56,67.6,89.7,66,89};

    s1.setdata("het" , 101 , arr );
    s1.getdata();


    return 0;
}