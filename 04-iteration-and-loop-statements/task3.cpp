#include <iostream>
using namespace std;

int main() {
    string num;
    string reversedNum;

    cout << "Enter your number: ";
    cin >> num;

    for(int i = num.length(); i >= 0; i--) {
        reversedNum += num[i];
    }

    cout << "Your reversed number is " << reversedNum;

    return 0;
}