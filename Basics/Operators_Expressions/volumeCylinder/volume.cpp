#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float pi = 3.14159, radius, height, volume;

    cout << "enter the radius : ";
    cin >> radius;

    cout << "enter the height : ";
    cin >> height;

    volume = pi * pow(radius, 2) * height;

    cout << "the volume is " << fixed << setprecision(5) << volume << " cubic units" << endl;

    return 0;
}