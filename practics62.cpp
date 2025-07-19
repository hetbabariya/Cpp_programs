/*
    16.Create a class called WordCounter with member variables for a string of text. Implement a function to count the occurrences of a 
       specific word in the text. Instantiate a WordCounter object, set the text, and count the occurrences of a word.
*/


#include<iostream>
#include<string.h>
using namespace std;

class WordCounter{

    private :
        string text;

    public :

        WordCounter()
        {
            text = "";
        }

        void setdata()
        {
            cout << "Enter string : ";
            fflush(stdin);
            getline(cin , text);
        }

        void occWordCount()
        {
            string occWord;
            char temp[10];
            int count = 0;

            cout << "Enter occurence Word : ";
            fflush(stdin);
            cin >> occWord;

            for(int i = 0 , j = 0; i < text.length() ;)
            {
                if(text[i] != occWord[j])
                {
                    j = 0;
                    i++;
                }
                else
                {
                    i++;
                    j++;
                
                    if(occWord[j] == '\0')
                    {
                        count++;
                    }
                }                
            }

            cout << "Count : " << count << endl;
        }

};


int main()
{

    WordCounter w1;

    w1.setdata();
    w1.occWordCount();

    return 0;
}