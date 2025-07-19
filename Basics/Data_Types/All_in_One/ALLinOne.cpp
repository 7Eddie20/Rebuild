/*
problem statement

Write a C++ program that includes:
- Declares an int, float, and char with initial values
- Performs and prints:
- A type cast from float to int
- A char → int conversion and back using ASCII math
- An overflow example using unsigned int
- A formatted float using fixed and setprecision(4)
- Displays:
- The size in bytes of each variable
- The memory address of each variable using &
*/

#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{
    int integer;
    string name;
    float decimal;
    char character;

    //input
    cout << endl;

    cout << "enter an integer : ";
    cin >> integer;
    cin.ignore();

    cout << "enter your name : ";
    getline(cin, name);

    cout << "enter a decimal : ";
    cin >> decimal;

    cout << "enter a character : ";
    cin >> character;

    cout << endl;

    //operations
    cout << "hello " << name << "\n" << endl;
    cout << endl;

    //typecast : float to int
    cout << "the decimal value converted to integer = " << (int)decimal << endl;
    cout << endl;

    //typecast : char to int and back using ascii math
    int charASCII = character;
    cout << "the character you entered has the ASCII code : " << charASCII << endl;

    char c = charASCII + 2;
    cout << "the character after 2 positions : " << c << endl;

    cout << "the ascii code of the updated character : " << (int)c << "\n" << endl;

    //overflow
    unsigned int uINT = UINT_MAX;
    cout << "the maximum value possible to have in the system(unsigned integer) : " << uINT << endl;
    cout << "after increasing the value by 1, the updated value : " << uINT + 1 << "\n" << endl;

    //setprecision
    cout << "the updated float value is : " << setprecision(4) << fixed << decimal << endl;
    cout << endl;

    //size
    cout << "memory reserved for " << integer << " (in bytes) : " << sizeof(integer) << endl;
    cout << "memory reserved for " << name << " (in bytes) : " << sizeof(name) << endl;
    cout << "memory reserved for " << decimal << " (in bytes) : " << sizeof(decimal) << endl;
    cout << "memory reserved for " << character << " (in bytes) : " << sizeof(character) << endl;
    cout << endl;

    //memory address
    cout << "the memory address of " << integer << " is : " << &integer << endl;
    cout << "the memory address of " << name << " is : " << &name << endl;
    cout << "the memory address of " << decimal << " is : " << &decimal << endl;
    cout << "the memory address of " << character << " is : " << &character << endl;
    cout << endl;

    return 0;

}