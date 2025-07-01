/*
problem statement :
Write a C++ program that:
- Takes two inputs:
– One int
– One float
Then:
- Prints the sum as a float
- Prints the sum as an int (via explicit typecasting)
- Casts the float to an int (truncation) and prints it
- Casts the int to a char and displays its corresponding ASCII character

*/

#include <iostream>
using namespace std;

int main()
{
    //variable declaration
    int integer;
    float decimal;

    //prompts and input
    cout << "enter the integer : ";
    cin >> integer;
    
    cout << "enter the decimal number : ";
    cin >> decimal;

    //printing using typecasting

    //float sum
    float fsum = (float)integer + decimal;
    cout << "the sum in float : " << fsum << endl;

    //int sum
    int isum = integer + (int)decimal;
    cout << "the sum in int : " << isum << endl;

    //float to int
    cout << "the decimal to integer : " << int(decimal) << endl;

    //char ASCII
    cout << "the character corresponding to the integer according to ASCII : " << (char)integer << endl;

    return 0;
}