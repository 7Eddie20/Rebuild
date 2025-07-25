#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, r1, r2;

    cout << "enter a : ";
    cin >> a;

    cout << "enter b : ";
    cin >> b;

    cout << "enter c : ";
    cin >> c;

    cout << "the quadratic equation is : " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    r1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    r2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    cout << "the 2 roots are " << r1 << " and " << r2 << endl;
    cout << endl;

    if ((a * pow(r1, 2) + b * r1 + c == 0) || (a * pow(r2, 2) + b * r2 + c == 0)){
        cout << "result crosschecked \nprogram terminated succesfully" << endl;
    }

    return 0;
}