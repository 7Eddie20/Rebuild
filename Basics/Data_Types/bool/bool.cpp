/*
Write a C++ program that:
- Takes any integer input from the user
- Converts it into a bool using typecasting
- Prints whether the value was considered true or false in Boolean logic

*/

#include <iostream>
using namespace std;

int main(){
    
    //declaration
    int num;

    //input
    cout << "enter a number : ";
    cin >> num;

    //typecasting
    bool val = num;

    if (val == true){
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}