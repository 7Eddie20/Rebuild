/*
 Problem Statement:
Create a program where the user inputs the book title, rating (1-5 stars) and author's name. Use getline() for input so spaces in book titles and author names are handled properly.
*/

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    //declaration and input
    string title, author, firstname, secondname;
    int rating;

    cout << "enter the title of the book: ";
    getline(cin, title);

    cout << "what would you rate the book (1-5)? \n";
    cin >> rating;

    cin.ignore();

    cout << "what is the author's name? \n";
    getline (cin, author);

    istringstream iss(author);
    iss >> firstname >> secondname;

    cout << "\nyou have given " << firstname << "'s " << title << " a rating of " << rating <<" stars" << endl;

    return 0;
}
