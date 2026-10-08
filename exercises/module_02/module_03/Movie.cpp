#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    // Prints the line blow to the screen
    cout << " Enter age: ";
    cin >> age;

    int cost = 0;

    if (age < 5)
    {
        cout << "  Ticket is free ";
    }
    else if (age <= 12)
    {
        cout << " Ticket price is : $ 5 ";
    }
    else if (age <= 17)
    {
        cout << " Ticket prise is: $ 7 ";
    }
    else if (age <= 64)
    {
        cout << " Ticket price is: $ 10 ";
    }
    else
    {

        cout << "ticket price is $ 6 ";
    }
    cout << " cost " << endl;

    return 0;
}
