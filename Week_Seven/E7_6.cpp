// Program that Returns a pointer for the last occurrance
// of the char "c" in a string

#include <iostream>
#include <cstring>

using namespace std;


/*
Function that returns the last occurance of the char 'c' in a string
@param char string[] is the charactor string array
@param char charactor is the letter that being searched for
@return will return the pointer value for the location of the char 'c'
*/
char *find_last(char str[], char charactor)
{  
    char* cPointer;
    int stringLen =  strlen(str);
    for(int i = stringLen; i >= 0; i--) {
        if (str[i] == 'c') {
            cPointer = &str[i];
            break;
        }
        else {
            cPointer = nullptr;
        }
    }
    return cPointer;
}

int main()
{
    char word[100];
    cout << "Please Enter a word: ";
    cin >> word;

    char *pointer = find_last(word, 'c');

    cout << "Pointer to last ocurrance of c: " << &pointer << endl;


    return 0;
}