#include <iostream>
using namespace std;

int main()
{
    int sqnum;
    string name;

    cout << "enter squad number: ";
    cin >> sqnum;
    cin.ignore();

    cout << "enter the player name: ";
    getline (cin, name);

    cout << "the squad number " << sqnum << " is now assigned to " << name << " successfully" << endl;

    return 0;
}