// AIM: showcase the use of getline with delimiter

#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "enter your name and rollnumber(sequence: name - rollnumber): ";
    getline(cin, name, '-');

    cout << "welcome to the club, dear " << name << endl;

    return 0;
}