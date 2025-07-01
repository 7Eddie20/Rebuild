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
    //declaration
    int integer;
    short int short_integer;
    long int long_integer;
    long long int long2integer;
    signed int signed_integer;
    unsigned int unsigned_integer;
    signed char signed_character;;
    unsigned char unsigned_character;
    char character;
    bool boolean;
    float decimal;
    double double_decimal;
    long double longDoubleDecimal;


    cout << "size of integer : " << sizeof(integer) <<endl;
    cout << "size of short integer : " << sizeof(short_integer) <<endl;
    cout << "size of long integer : " << sizeof(long_integer) <<endl;
    cout << "size of long long integer : " << sizeof(long2integer) <<endl;
    cout << "size of signed integer : " << sizeof(signed_integer) <<endl;
    cout << "size of unsigned integer : " << sizeof(unsigned_integer) <<endl;
    cout << "size of signed character : " << sizeof(signed_character) <<endl;
    cout << "size of unsigned character : " << sizeof(unsigned_character) <<endl;
    cout << "size of character : " << sizeof(character) <<endl;
    cout << "size of boolean : " << sizeof(boolean) <<endl;
    cout << "size of float : " << sizeof(decimal) <<endl;
    cout << "size of double : " << sizeof(double_decimal) <<endl;
    cout << "size of long double decimal : " << sizeof(longDoubleDecimal) <<endl;

    return 0;
}