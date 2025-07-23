/*
program stetement:

Write a C++ program that:
- Declares three bool flags manually:
- isHungry = true
- isTired = false
- isMotivated = true
- Evaluate combinations like:
- isHungry && isMotivated
- !isTired || !isMotivated
- (isHungry || isTired) && isMotivated
- Print messages showing which conditions are true and which are false

*/

#include <iostream>
using namespace std;

int main()
{
    //declaration
    bool isHungry = true;
    bool isTired = false;
    bool isMotivated = true;

    //combinations

cout << "Hungry and motivated: " << (isHungry && isMotivated) << endl;
cout << "Not tired or not motivated: " << (!isTired || !isMotivated) << endl;
cout << "Hungry or tired and motivated: " << ((isHungry || isTired) && isMotivated) << endl;

return 0;
}