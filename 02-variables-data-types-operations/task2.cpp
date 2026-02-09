#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int result;

    cout << "Enter your num #1: ";
    cin >> num1;

    cout << "Enter your num #2: ";
    cin >> num2;

    result = num1 + num2;
    cout << "Result of the sum of the two numbers: " << result << endl;

    result = num1 - num2;
    cout << "Result of the substraction of the two numbers: " << result << endl;

    result = num1 * num2;
    cout << "Result of the multiplication of the two numbers: " << result << endl;

    result = num1 / num2;
    cout << "Result of the division of the two numbers: " << result << endl;

    result = num1 % num2;
    cout << "Result of the modular division of the two numbers: " << result << endl;

    return 0;
}