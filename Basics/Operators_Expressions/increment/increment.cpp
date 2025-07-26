#include <iostream>
using namespace std;

int main()
{
    int x = 5, y, a = 7, b;

    y = ++x;

    cout << y << " " << x << endl; // prints 6 6; first x is incremented and then assigned to y. 

    b = a++;
    
    cout << b << " " << a; // print 7 8; first value of a is assigned to b then a is incremented.

    return 0;
}