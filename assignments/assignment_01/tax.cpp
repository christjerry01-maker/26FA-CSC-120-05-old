# include <iostream>

using namespace std;

int main()
{
double number1;
double number2;
double number3;
cout << " Enter the purchase price: ";
cin >> number1;
cout << " Enter the state sales tax rate (as a percentage)";
cin >> number2;
cout << " Enter the county sales tax rate (as a percentage) ";
cin >> number3;
double totaltax =  number2 /100 + number3 /100;
cout << " total tax:" << totaltax << endl;
double totalprice = number1 + totaltax;
cout << " total price: $" << totalprice << endl;

return 0;
}