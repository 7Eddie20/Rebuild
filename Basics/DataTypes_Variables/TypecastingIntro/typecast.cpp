/*
Objective:
Write a C++ program that demonstrates explicit typecasting by converting a float value into an int. The program should display both the original float value and the converted integer value to highlight the truncation effect of typecasting.
Requirements:
- Declare a float variable with a decimal value.
- Use explicit typecasting to convert it into an int.
- Print both values with clear labels.
- Ensure the output shows the loss of precision due to typecasting.
*/

#include <iostream>
using namespace std;

int main(){

    float decimal = 7.911;
    int number;

    number = (int)decimal;

    cout << "the float value: " << decimal << endl;
    cout << "float value after rounding off: " << number << endl;

    return 0;
}