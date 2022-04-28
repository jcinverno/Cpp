#include <iostream>

using namespace std;

int main() 
{
cout << "Hello World";
cout << "Hello World" <<endl;
cout << "Hello\nWorld";

int num1;
int num2;
double num3;

cout << "Enter an interger: ";
cin >> num1;
cout << "You entered: " << num1 <<endl;

cout << "Enter a first integer: ";
cin >> num1;
cout << "Enter a second integer: ";
cin >> num2;
cout << "You entered: " << num1 << "and " << num2 <<endl;

cout << "Enter 2 integers separated by a space: ";
cin >> num1 >> num2;
cout << "You've entered: " << num1 << "and " << num2 <<endl;

cout << "Enter a double: ";
cin >> num3;
cout << "You entered: " << num3;

return 0;
}