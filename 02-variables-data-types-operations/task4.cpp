#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Enter coordinates of point A (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of point B (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of point C (x3 y3): ";
    cin >> x3 >> y3;

    double gx = (x1 + x2 + x3) / 3;
    double gy = (y1 + y2 + y3) / 3;

    cout << "\nThe coordinates of the centroid (medicenter) are:" << endl;
    cout << "G(" << gx << ", " << gy << ")" << endl;

    return 0;
}