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

int main(){
    
    float flo = 7.123456789;
    double dou = 7.123456789;

    cout << "float with default formatting: " << flo << endl;
    cout << "double with default formatting: " << dou << endl << endl;

    cout << "float with scientific notation: " << scientific << flo << endl;
    cout << "double with scientific notation: " << scientific << dou << endl << endl;

    cout << "float with fixed notation: " << fixed << flo << endl;
    cout << "double with fixed notation: " << fixed << dou << endl << endl;

    cout << "float with setprecision 2: " << fixed << setprecision(2) << flo << endl;
    cout << "double with setprecision 2: " << fixed << setprecision(2) << dou << endl << endl;

    cout << "float with setprecision 5: " << fixed << setprecision(5) << flo << endl;
    cout << "double with setprecision 5: " << fixed << setprecision(5) << dou << endl << endl;

    cout << "float with setprecision 5: " << scientific << setprecision(5) << flo << endl;
    cout << "double with setprecision 2: " << scientific << setprecision(2) << dou << endl << endl;

    return 0;
}


