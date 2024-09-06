/*
!!!!!!!!!!!!!!!!!!concept!!!!!!!!!!!!!!!!!
                ASCII Representation 
Each character (like letters, digits, or symbols) has a unique integer
value assigned to it, which the compiler uses to interpret the character. 
 In the case of English letters:

Uppercase letters ('A' to 'Z') have ASCII values ranging from 65 to 90.
Lowercase letters ('a' to 'z') have ASCII values ranging from 97 to 122.

uppercase and lowercase have fixed difference of 32
*/



#include <iostream>
using namespace std;

char LowercaseToUppercase_and_UppercaseToLowercase
()
{
    char ch;
    cout << "Enter a valid Alphabet : " << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - ('a' - 'A');
            cout << ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + ('a' - 'A');
            cout << ch;
        }
    }
    else
    {
        cout << "Not a valid alphabet" << endl;
    }
}

int main()
{
    LowercaseToUppercase_and_UppercaseToLowercase
    ();

    return 0;
}