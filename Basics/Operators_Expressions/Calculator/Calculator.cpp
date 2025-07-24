/*

problem statement: 

Write a C++ program that:
- Takes two integers as input from the user.
- Performs and displays the result of:
- Addition
- Subtraction
- Multiplication
- Division
- Modulus (remainder)


Requirements:
- Use all five arithmetic operators
- Handle division carefully (avoid dividing by zero)
- Display results with clear labels

💡 Bonus (Optional):
- Use setprecision(2) to format the division result
- Add a check: if second number is 0, skip division and modulus

algorithm: 

> include iomanip library
> input 2 integers a and b
> perform addition and store in sum
> perform subtraction and store in difference
> perform multiplication and store in product
> check if b is 0,
    > if yes,
        - stop the program
    > if no,
        - perform division and store in quotient
        - make quotient have a float typecast and setprecision(2)
        - perform division and store the mod in remainder
> end the program

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //variable declaration and initialization
    int a;
    int b;

    cout << "enter 2 numbers : ";
    cin >> a;
    cin >> b;

    // operations
    int sum = a + b;
    cout << "sum = " << sum << endl;

    int difference = a - b;
    cout << "difference = " << difference << endl;

    int product = a * b;
    cout << "product = " << product << endl;

    if(b==0){
        cout << "program terminated as further operations are not possible with second input as a 0" << endl;
    }
    else{
        float quotient = (float)a/b;
        cout << "quotient = " << setprecision(2) << quotient << endl;

        int remainder = a%b;
        cout << "remainder = " << remainder << endl;
    }
    return 0;
}
