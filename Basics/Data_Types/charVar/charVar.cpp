#include <iostream>
using namespace std;

int main()
{
    char grade = 'A'; // a char should always be declared in single quotation.
    char grade1 = 65; // if character is numeric, it will be treated as ASCII until it has been declared in quotation.

    cout << grade << " " << grade1;
}