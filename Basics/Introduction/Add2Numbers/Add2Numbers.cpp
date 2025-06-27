/* 
algorithm

>start
> enter 2 numbers a and b
> sum = a + b
> display sum
>end
*/


#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;
    cout << "enter first number: ";
    cin >> a;

    cout << "enter second number: ";
    cin >> b;

    sum = a + b;

    cout << "the sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;

}