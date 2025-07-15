/*

 Problem Statement:
Create a program where the user inputs the book title, author's name, and a rating (1-5 stars). Use getline() for input so spaces in book titles and author names are handled properly.


*/

#include <iostream>
using namespace std;

int main()
{
    string title;
    string authname;
    int rating;

    cout << "enter the book title : ";
    getline(cin, title);

    cout << "enter the author's name : ";
    getline(cin, authname);

    cout << "rate the book (1-5 stars) : ";
    cin >> rating;

    cout << "\n\n\n";

    cout << "BOOK DETAILS" << endl;
    cout << endl;
    cout << "Title : " << title << endl;
    cout << "Author : " << authname << endl;
    cout << "Rating : ";
    for (int i = 0; i < rating; i++){
        cout << " * ";
    }
    cout << endl;

    return 0;
}