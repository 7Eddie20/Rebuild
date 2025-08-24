// AIM: showcase the use of cinignore

#include <iostream>
using namespace std;

int main()
{
    int roll;
    string name;

    cout << "enter roll number: ";
    cin >> roll;

    cin.ignore();

    cout << "enter name: ";
    getline(cin, name);

    cout << "welcome " << name << ". Your examination seat is " << roll <<endl;

    return 0;
}