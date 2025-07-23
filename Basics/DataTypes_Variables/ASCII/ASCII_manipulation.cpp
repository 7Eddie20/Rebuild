/*
problem statement : 
Write a C++ program that does the following:
- Takes one char input from the user
- Then prints:
- The ASCII code of that character (cast char → int)
- The same letter flipped in case:
- If lowercase → show uppercase
- If uppercase → show lowercase
- The previous and next characters in the ASCII table (cast + math)

*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    //variable
    char c;

    //input
    cout << "enter a character : ";
    cin >> c;

    //ASCII code
    cout << "the ASCII code of the character is : " << (int)c << endl;

    //Case flipping

    cout << "the character after flipping is : ";
    if (islower(c)){
       char d = toupper(c);
        cout << d << endl;
    }
    else{
       char d = tolower(c);
        cout << d << endl;
    }

    //prior and next character
    char cminus = c - 1;
    cout << "the preceding character is " << cminus << " having ASCII code " << (int)cminus << endl;

    char cplus = c + 1;
    cout << "the proceeding character is " << cplus << " having ASCII code " << (int)cplus << endl;

    return 0;

}