#include <iostream>
using namespace std;

int main() {
    char symbol;
    int rows;

    cout << "Enter symbol: ";
    cin >> symbol;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {
        
        for(int space = 1; space <= rows - i; space++) {
            cout << " ";
        }

        for(int j = 1; j <= 2 * i - 1; j++) {
            cout << symbol;
        }

        cout << endl;
    }

    return 0;
}