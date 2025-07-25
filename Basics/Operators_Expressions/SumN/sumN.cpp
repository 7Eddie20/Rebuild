#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "enter the number : ";
    cin >> n;

    sum = (n * (n+1)) / 2;

    cout << "the sum of first " << n << " natural numbers : " << sum;

    return 0;
}