/*
problem statement:
Write a program that asks the user to enter:
- their age (as an int),
- their CGPA (as a float), and
- the first letter of their name (as a char)
Then print all three values in a clean, readable format.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declaration and input
    int age;
    float cgpa;
    char initial;

    cout << "enter your age: ";
    cin >> age;

    cout << "enter your cgpa: ";
    cin >> cgpa;

    cout << "enter the initial of your name: ";
    cin >> initial;

    // output
    cout << "your age is " << age << endl;
    cout << "your cgpa is " << setprecision(3) << cgpa << endl;
    cout << "the initial is " << initial << endl;

    return 0;
}
