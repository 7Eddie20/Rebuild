/*
algorithm
> declare and input A & B
> add A & B and store it in SUM
> Display SUM
*/

#include <iostream>
using namespace std;

int main()
{
    //declaration and input
    int augend, addend, SUM;
    cout << "enter the augend: ";
    cin >> augend;

    cout << "enter the addend: ";
    cin >> addend;

    // addition
    SUM = augend + addend;

    //display
    cout << "the sum of 2 numbers is " << SUM <<endl;

    return 0;

}