#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << " What is today temperature? ";
    cin >> temp;
    if (temp <= 32)
    {
        cout << " Unsafe for outdoor activities. \n";
    }
    else
        cout << " Safe for oudoor activities. \n";

    return 0;
}
