#include <iostream>

using namespace std;

int main()
    {
double number1;
double number2;
double number3;
cout << " Enter the meal cost: ";
cin >> number1;
cout << " Enter the tax rate (as a percentage): ";
cin >> number2;
cout << " Enter  the tip rate (as a percentage): ";
cin >> number3;
double totaltax = number1 * number2 /100 ;
cout << " total tax: $ " << totaltax << endl;
double totaltip = (number1 + totaltax) * number3 /100;
cout << " total tip: $ " << totaltip << endl;
double totalbill = number1 + totaltax + totaltip;
cout << " total bill: $ " << totalbill << endl;

return 0;
}