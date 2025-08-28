/*
Write a C++ program that:
- Takes any integer input from the user
- Prints whether the value was considered true or false in Boolean logic

*/


#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    bool boolean = num;

    if(boolean == true){
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}