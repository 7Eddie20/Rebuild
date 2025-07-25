/*
problem statement: 
Write a program that:
- Starts with a score of 0
- Adds, subtracts, multiplies, divides, and mods the score using assignment operators
- Displays the updated score after each operation

*/

#include <iostream>
using namespace std;

int main()
{
    //declaration and initialization

    int score, add, sub, prod, rem;
    float div;


    score = 0;
    cout << "score = " << score << endl;

    // addition
    cout << "enter the value to add : ";
    cin >> add;

    score += add;
    cout << "score += " << score << endl;

    //subtraction
    cout << "enter the value to sub : ";
    cin >> sub;

    score -= sub;
    cout << "score -= " << score << endl;

    //multiplication
    cout << "enter the value to multiply : ";
    cin >> prod;

    score *= prod;
    cout << "score += " << score << endl;

    //divide
    cout << "enter the value to divide : ";
    cin >> div;

    float quotient = (float)score / div; // score / div = score;
    cout << "score /= " << quotient << endl;

    //mod
    score %= (int)div;
    cout << "score %= " << score << endl;

    return 0;

}