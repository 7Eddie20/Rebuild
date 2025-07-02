/*
Write a C++ program that:
- Includes the header:
- Declares:
- unsigned int;
- signed int;
- Prints both values before and after these operations:
- + 1;
- - 1;
- Clearly label outputs to show what’s happening

*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{

    //declaration
    unsigned int a = UINT_MAX;
    signed int b = INT_MIN;

    cout << "unsigned integer at the max value : " << a << endl;
    cout << "unsigned integer after increasing the value by 1 : " << a + 1 << endl;

    cout << "signed integer at the minimum value : " << b << endl;
    cout << "signed integer after decreasing the value by 1 : " << b - 1 << endl;

    return 0;

}