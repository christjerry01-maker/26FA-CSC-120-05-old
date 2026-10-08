#include <iostream>
using namespace std;

int main()
{
    int age = 0;
    cout << " Enter age: ";
    cin >> age;

    bool haslicense = false;
    cout << " Do you have a liscence? (1 = yes; 0 = no)";
    cin >> haslicense;

    if (age >= 18 && haslicense)
    {
        cout << " you are allowed to drivve. \n";
    }
    else
    {
        cout << " you are not allowwed to drive. \n";
    }

    return 0;
}
