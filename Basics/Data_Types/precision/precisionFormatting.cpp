/*
problem statement :
Write a C++ program that:
- Declares a float and a double, both with the value 7.123456789
- Prints both values using:
- Default formatting
- fixed (fixed-point notation)
- scientific (scientific notation)
- With different setprecision() levels (2, 5, 9)

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declaration
    float f = 7.123456789;
    double d = 7.123456789;

    //printing

    //default formatting
    cout << "floating point value in default formatting : " << f << endl;
    cout << "double floating point value in default formatting : " << d << endl;

    //fixed point
    cout << "floating point value in fixed point notation : " << fixed << f << endl;
    cout << "double floating point value in fixed point notation : " << fixed << d << endl;
}