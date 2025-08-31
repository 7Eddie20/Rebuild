/*
problem statement :
Write a C++ program that does the following:
- Ask the user for their age
- Ask if they have a fitness routine (as 1 for yes, 0 for no)
Then:
- Store the response in a bool variable
- Check using an if condition:
- If age is 18 or older and has a fitness routine → print: "You're an adult and staying healthy!"
- If age is 18 or older but no fitness routine → print: "Consider starting a fitness routine—it helps!"
- If age is below 18 → print: "You're young—focus on learning and fun!"
*/

#include <iostream>
using namespace std;

int main()
{
    int age, routine;
    bool fitness;

    cout << "what is your age?" << endl;
    cin >> age;

    cout << "do you have a fitness routine? (yes - 1 / no - 0)" << endl;
    cin >> routine;


    if (routine == 1 || routine == 0){
        fitness = bool(routine);

        if (age >= 18){
            if (fitness == true){
                cout << "You're an adult and staying healthy!" << endl;
            }
            else{
                cout << "Consider starting a fitness routine - it helps!" << endl;
            }
        }else{
            cout << "you're young - focus on learning and fun!" <<endl;
        }
    }else{
        cout << "invalid response!" << endl;
    }

    return 0;
}