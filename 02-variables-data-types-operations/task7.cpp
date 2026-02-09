#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Enter num a and b: ";
    cin >> a >> b;

    if(a < b) {
        a *= 3;
        b /= 5;
    } else {
        b *= 3;
        a /= 5;
    }

    cout << "First num: " << a << endl;
    cout << "Second num: " << b;

    return 0;
}