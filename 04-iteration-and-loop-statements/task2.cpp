#include <iostream>
using namespace std;

int main() {
    string num;
    int result;

    cout << "Enter your number: ";
    cin >> num;

    for(int i = 0; i < num.length(); i++) {
        result += num[i] - '0'; // convvert string into a number(ascii)
    }

    cout << "Sum of digits: " << result;

    return 0;
}