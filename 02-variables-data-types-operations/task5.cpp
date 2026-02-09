#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double alpha, beta, gamma, R;

    cout << "Enter angle alpha (in degrees): ";
    cin >> alpha;

    cout << "Enter angle beta (in degrees): ";
    cin >> beta;

    cout << "Enter angle gamma (in degrees): ";
    cin >> gamma;

    cout << "Enter radius of the circumscribed circle R: ";
    cin >> R;

    // Convert degrees to radians
    alpha = alpha * M_PI / 180;
    beta  = beta  * M_PI / 180;
    gamma = gamma * M_PI / 180;

    // Area formula
    double area = 2 * R * R * sin(alpha) * sin(beta) * sin(gamma);

    cout << "\nThe area of the triangle is: " << area << endl;

    return 0;
}