/*
Problem Statement:
Write a program that asks the user for their name, age, and a short bio. Since names and bios might contain spaces, use getline() for input handling.
*/

#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    //declaration and input
    string name, bio;
    int age;

    cout << "enter your name(complete): ";
    getline(cin, name);

    //name extraction
    istringstream iss(name);
    string firstname, lastname;
    iss >> firstname >>  lastname;

    cout << "enter your age " << firstname << ": ";
    cin >> age;

    cin.ignore();
    cout << "tell us something about yourself " << firstname << ": ";
    getline(cin, bio);

    cout << "\n\nhere is your form filled" << endl;
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "bio: " << bio << endl;

    return 0;

}