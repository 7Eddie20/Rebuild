#include <iostream>
using namespace std;

int main()
{
    char a = 127;
    a++;

    cout << (int)a;  // due to overflow, the next character displayed is of the ASCII code -128
}