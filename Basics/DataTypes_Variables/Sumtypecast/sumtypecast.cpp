/*
problem statement :
Write a C++ program that:
- Takes two inputs:
– One int
– One float
Then:
- Prints the sum as a float
- Prints the sum as an int (via explicit typecasting)
- Casts the float to an int (truncation) and prints it
- Casts the int to a char and displays its corresponding ASCII character

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    //declaration and input
    int num;
    float dec;

    cout << "enter the number: ";
    cin >> num;

    cout << "enter the decimal: ";
    cin >> dec;

    float sumf = num + dec;
    cout << "sum as a float: " << sumf << endl;

    int sumi = int(sumf);
    cout << "sum as a int: " << sumi << endl;

    cout << "float as an int: " << int(dec) << endl;

    cout << "ascii corresponding to the int value: " << char(num) << endl;

    return 0;
}