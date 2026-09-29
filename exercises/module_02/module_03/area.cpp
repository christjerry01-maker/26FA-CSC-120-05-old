#include <iostream>
using namespace std;

int main()
{
    int length, width, area;

    cout << "This program calculates the area of a rectangle." << endl;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    area = length * width;
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
