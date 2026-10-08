#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer and I will tell you if it is odd or even: ";
    cin >> number;

    // if (number % 2 == 0) {
    if (number % 2 == 0)
    {
        cout << number << " is even." << endl;
    }
    else
    {
        cout << number << " is odd." << endl;
    }

    return 0;
}
