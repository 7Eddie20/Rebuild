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
    //variable
    int age;
    int response;
    bool fitnessRoutine;

    //input
    cout << "enter your age : ";
    cin >> age;

    if (age >= 18){
            cout << "do you have a fitness routine? (press (1-yes), (0-no)) : ";
            cin >> response;
            if (response == 0 || response == 1){
                bool fitnessRoutine = bool(response);

                if (fitnessRoutine == true){
                    cout << "you're an adult and staying healthy!" << endl;
                }
                else{
                    cout << "consider starting a fitness routine; it helps!" << endl;
                }
            }
            else {
                cout << "invalid input; program terminated" << endl;
            }
        }else {
            cout << "you're young; focus on studies and fun!";
        }
    return 0;
}