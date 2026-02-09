#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double expr1 = a + b + c;
    double expr2 = a * b * c;

    double resultA = min(expr1, expr2) + 1.5;

    double e1 = pow(a, 2) - pow(b, 3) + c;
    double e2 = a - 4.5 * b;
    double e3 = 1.5 * a + 3.5 * b - 8 * c;

    double resultB = max(max(e1, e2), e3) - 7.5;

    cout << "Result a): " << resultA << endl;
    cout << "Result b): " << resultB << endl;

    return 0;
}