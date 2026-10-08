#include <iostream>
using namespace std;

int main()
{
    string Name, lastname;
    double GPA, credit, activities;
    cout << " Hello students! \n";
    cout << " Do you know extracuricullar scholarsip is now available at BHCC? \n";
    cout << " Let's check your eligibility. \n";
    cout << " First Name: " << endl;
    cin >> Name;
    cout << " Last name: " << endl;
    cin >> lastname;
    cout << " Do you participated in any extracurricular activities? (1 = yes, 0 = no)";
    cin >> activities;
    cout << "How many credit hours Do you completed? \n";
    cin >> credit;
    cout << " Enter GPA: \n";
    cin >> GPA;
    if (GPA >= 3.5 && credit == 30)
    {
        cout << " Congratulations! You are fully eligible for the scholarship. \n ";
    }
    else if (GPA = 2.5 && activities == 1)
    {
        cout << " You are conditionally eligible for the scholarship. \n";
    }
    else
        cout << " Sorry, you are not Eligible.";

    return 0;
}
