#include <iostream>

using namespace std;

int main()
{
    double p;
    double r;
    double t;
    cout << " Enter princiipal  amount: $";
    cin >> p;
    cout << " rates ";
    cin >> r;
    cout << " enter time ";
    cin >> t;
    cout << " interest is: $";
    double I = (p * r * t) / 100;
    cout << " interest is: $" << I << endl;

    return 0;
}
