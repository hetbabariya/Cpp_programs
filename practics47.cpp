/*
    2.Create a class called Time with member variables for hours, minutes, and seconds. Implement functions to add and subtract 
    two Time objects. Instantiate two Time objects, perform the operations, and print the results.
*/



#include<iostream>
using namespace std;

class Time{

    private :
        int hours;
        int minutes;
        int seconds;

    public :

        Time()
        {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
       
        Time(int hours , int minutes , int seconds)
        {
            this->hours = hours ;
            this->minutes = minutes;
            this->seconds = seconds;
        }

        int toSeconds(){
            return hours * 3600 + minutes * 60 + seconds;
        }

        Time add(Time& other)
        {
            int total_seconds = toSeconds() + other.toSeconds();
            return fromSeconds(total_seconds);
        }
        
        Time sub(Time& other)
        {
            int total_seconds = toSeconds() + other.toSeconds();
                return fromSeconds(total_seconds);
        }

        Time fromSeconds(int total_seconds)
        {
            int hours = total_seconds / 3600;
            int minutes = (total_seconds % 3600) / 60;
            int seconds = total_seconds % 60;
            return Time(hours, minutes, seconds);
        }

        void display()
        {
           cout << hours << ":" << minutes << ":" << seconds << std::endl;
        }


};


int main()
{

    Time t1(1 , 40 , 60);
    Time t2(2 , 50 , 10);

    Time resultAdd = t1.add(t2);
    resultAdd.display();

    return 0;
}