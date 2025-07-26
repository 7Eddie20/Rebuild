#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double speed, time, distance;

    cout << "enter the speed of the object (km/hr) : ";
    cin >> speed;

    cout << "enter the time taken by the object (hour) : ";
    cin >> time;

    distance = speed * time;

    cout << "the distance : " << fixed << setprecision(2) << distance << " kilometers" << endl;

    return 0;
}