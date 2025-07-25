#include <iostream>
using namespace std;

int main()
{
    //declaration + initialization
    int breadth, height;

    cout << "enter the breadth of the triangle : ";
    cin >> breadth;

    cout << "enter the height of the triangle : ";
    cin >> height;

    float area = (float)(breadth * height) / 2;

    cout << "the area of your triangle is : " << area << endl;

    return 0;
}