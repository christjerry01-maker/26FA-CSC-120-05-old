#include <iostream>
using namespace std;

int main()
{
    double scorexam;
    cout << " Enter your score exam: ";
    cin >> scorexam;
    if (scorexam >= 90 && scorexam >= 60)
    {
        cout << "Excellent performance! \n.";
    }
    if (scorexam >= 60)
    {
        cout << "You passed. \n";
    }
    else
        cout << " you failed. \n";

    return 0;
}
