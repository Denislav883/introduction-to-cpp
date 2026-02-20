#include <iostream>
using namespace std;

#define MIN 1.5
#define MAX 10.5

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= MIN && num <= MAX) {
        cout << "Your number is in the given interval: [" << MIN << ", " << MAX << "]";
    } else {
        cout << "Your number is not in the given interval: [" << MIN << ", " << MAX << "]";
    }

    return 0;
}