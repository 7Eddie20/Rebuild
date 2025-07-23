/*
problem statement:
Write a program that asks the user to enter:
- their age (as an int),
- their CGPA (as a float), and
- the first letter of their name (as a char)
Then print all three values in a clean, readable format.

algorithm
> declare the variables
> take the input
> print the data

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age;
    float cgpa;
    char initial;

    cout << "enter your age : ";
    cin >> age;

    cout << "enter your cgpa : ";
    cin >> cgpa;

    cout << "enter the first letter of your name : ";
    cin >> initial;

    cout << "age : " << age << endl;
    cout << "cgpa : " << fixed << setprecision(2) << cgpa << endl;
    cout << "first letter of the name : " << initial << endl;

    return 0;
}