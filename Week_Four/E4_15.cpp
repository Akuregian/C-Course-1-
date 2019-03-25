#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int word_Length = 0;
double max_Word_Length = 0;

int main ()
{
    // Input from the user
    cout << "Enter a Sequence of Words: ";
    string sentence, ch;
    getline(cin, sentence);

    // Find the length of the longest word
    for (int i = 0; i < sentence.length(); i++)
    { 
        ch = sentence.substr(i, 1);

        if (ch != " ")
        {   
            word_Length++;

            if (word_Length > max_Word_Length)
            {
                max_Word_Length = word_Length;
            }
        }
        else 
        {
            word_Length = 0;
        }
    }

    // Print out the Max word and word_length (Debugging)
    cout << "Max Length: " << max_Word_Length << endl;


    // Print the box, based on the longest word
    cout << "x";
    for (int i = 0; i < max_Word_Length; i++)
    {
        cout << "-";
    }
    cout << "x" << endl;


    // print the sentence
    double counter2 = 0;
    int spaces = 0;
    string word = "";

    for (int i = 0; i < sentence.length(); i++)
    {
        string ch2 = sentence.substr(i, 1);

        if (ch2 == " " || i == sentence.length() - 1)
        {  
            
            if ( i == sentence.length() -1) 
            {
                word = word + ch2;
                counter2++;
            }
            
            // Round the spaces value
            spaces = round(((max_Word_Length) - counter2) / 2.0);
            cout << "|";

            // Print the First spaces on the RIGHT Side
            for (int j = 0; j < spaces; j++)
            {
                cout << " ";
            }

            // Print the each word
            cout << word;



            int x = max_Word_Length;
            int y = counter2;

            // if its an Odd number, we subtact a space from one side.
            if ((x + y) % 2 == 1)
            {
                spaces = spaces - 1;
            }

            // Print the Spaces for the LEFTside.
            for (int j = 0; j < spaces; j++)
            {
                cout << " ";
            }

            // Clear 'Word' variable
            cout << "|" << endl;
            word = "";
            counter2 = 0;

        }

        else
        {   
            word = word + ch2;
            counter2++;
        }
    }

    // Print the bottom of the box, based on the longest word
    cout << "x";
    for (int i = 0; i < max_Word_Length; i++)
    {
        cout << "-";
    }
    cout << "x" << endl;
};