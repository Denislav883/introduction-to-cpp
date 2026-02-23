#include <iostream>
using namespace std;

int main() {
    string num;
    int counter;

    cout << "Enter your number: ";
    cin >> num;

    for(int i = 0; i < num.length(); i++) {
        counter++;
    }

    cout << "Your number is " << counter << " characters long";

    return 0;
}