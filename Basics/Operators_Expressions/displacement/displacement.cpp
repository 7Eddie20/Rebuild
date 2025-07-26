#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double initialVelocity, finalVelocity, acceleration, displacement;

    cout << "enter the initial velocity (in m/s) : ";
    cin >> initialVelocity;

    cout << "enter the final velocity (in m/s) : ";
    cin >> finalVelocity;

    cout << "enter acceleration (in m/s^2) : ";
    cin >> acceleration;

    displacement = (pow(finalVelocity, 2) - pow(initialVelocity, 2)) / (2 * acceleration);

    cout << "the displacement of the object : " << fixed << setprecision(2) << displacement << " meters" << endl;

    return 0;
}