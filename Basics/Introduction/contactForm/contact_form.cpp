/*
Problem Statement:

Write a program that asks the user for their name, age, and a short bio. Since names and bios might contain spaces, use getline() for input handling.

*/

#include <iostream>
using namespace std;

int main()
{
    //variable
    string name;
    int age;
    string bio;

    cout << "enter your name : ";
    getline(cin, name);

    cout << "enter your age : ";
    cin >> age;
    cin.ignore();

    cout << "enter your bio : ";
    getline(cin, bio);

    cout << endl;
    cout << "profile summary : " << endl;
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Bio : " << bio << endl;

    return 0;
}