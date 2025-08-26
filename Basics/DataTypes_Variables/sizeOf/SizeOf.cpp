/*
Problem statement:
Write a C++ program that:
- Declares the following variables:
- An int
- A float
- A char
- A bool
- Uses sizeof() to print the size (in bytes) of each variable
- Optionally: print sizes of double, short, and long long as bonus exploration
*/

#include <iostream>
using namespace std;

int main()
{
    //declaratiom
    short int ShortInt;
    long int LongInt;
    long long int LongLongInt;
    unsigned int UnsignedInt;
    signed int SignedInt;
    int NormalInt;
    char NormalChar;
    unsigned char UnsignedChar;
    signed char SignedChar;
    float NormalFloat;
    double NormalDouble;
    long double LongDouble;
    bool boolean;

    cout << "size of short integer: " << sizeof(ShortInt) << " bytes" << endl;
    cout << "size of long integer: " << sizeof(LongInt) << " bytes" << endl;
    cout << "size of long long integer: " << sizeof(LongLongInt) << " bytes" << endl;
    cout << "size of signed integer: " << sizeof(SignedInt) << " bytes" << endl;
    cout << "size of unsigned integer: " << sizeof(UnsignedInt) << " bytes" << endl;
    cout << "size of integer: " << sizeof(NormalInt) << " bytes" << endl;
    cout << "size of normal character: " << sizeof(NormalChar) << " bytes" << endl;
    cout << "size of unsigned character: " << sizeof(UnsignedChar) << " bytes" << endl;
    cout << "size of signed character: " << sizeof(SignedChar) << " bytes" << endl;
    cout << "size of float: " << sizeof(NormalFloat) << " bytes" << endl;
    cout << "size of double: " << sizeof(NormalDouble) << " bytes" << endl;
    cout << "size of long double: " << sizeof(LongDouble) << " bytes" << endl;
    cout << "size of boolean: " << sizeof(boolean) << " bytes" << endl;

    return 0;
}