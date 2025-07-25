#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double r, area;

    cout << "enter radius : ";
    cin >> r;

    area = 3.14159 * pow(r, 2);

    cout << "the area of circle : " << fixed << setprecision(2) << area << endl;

    return 0;
}