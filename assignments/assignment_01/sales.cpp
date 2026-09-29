#include <iostream>

using namespace std;

int main()
{
    double number1;
    double number2;
    cout << " the total annual sales: ";
    cin >> number1;
    cout << " the percentage of sales from the East Coast division: ";
    cin >> number2;
    double eastcoastsales = number1 * number2 / 100;
    cout << " East Coast Division Sales: $ " << eastcoastsales;

    return 0;
}
