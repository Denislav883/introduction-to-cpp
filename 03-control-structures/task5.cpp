#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    double D = a1 * b2 - a2 * b1;
    double Dx = c1 * b2 - c2 * b1;
    double Dy = a1 * c2 - a2 * c1;

    if (D != 0) {
        double x = Dx / D;
        double y = Dy / D;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            cout << "There are countless solutions";
        } else {
            cout << "There is no solution";
        }
    }

    return 0;
}