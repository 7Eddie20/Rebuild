/*
Problem Statement: Voting Eligibility Checker
Write a program that determines whether a person is eligible to vote based on their age. The legal voting age is 18 years or older.
✅ Requirements:
- Declare an integer variable age and assign it a value.
- Use a Boolean variable isEligible to store the result of the condition age >= 18.
- Print "You are eligible to vote." if isEligible is true.
- Otherwise, print "You are not eligible to vote."
*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age: ";
    cin >> age;

    bool isEligible = age >= 18;

    if (isEligible){
        cout << "you are allowed to vote" << endl;
    }
    else {
        cout << "you are not eligible. grow up kid" << endl;
    }

    return 0;
}