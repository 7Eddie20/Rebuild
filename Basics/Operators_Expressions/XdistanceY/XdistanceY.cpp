#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, y1, x2, y2, distance;

    cout << "enter coordinates of the start point : ";
    cin >> x1 >> y1;

    cout << "enter coordinates of the end point : ";
    cin >> x2 >> y2;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "the distance between 2 points : " << distance << " units" << endl;

    return 0;
}