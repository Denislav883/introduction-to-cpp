#include <iostream>
using namespace std;

int main() {
    int num;
    char character;
    bool boolean;
    float floatNum;
    double doubleNum;

    cout << "Enter an integer number: ";
    cin >> num;

    cout << "Enter some character: ";
    cin >> character;

    cout << "Enter a boolean value: ";
    cin >> boolean;

    cout << "Enter an float number: ";
    cin >> floatNum;

    cout << "Enter an double number: ";
    cin >> doubleNum;

    cout << num << endl;
    cout << character << endl;
    cout << boolean << endl;
    cout << floatNum << endl;
    cout << doubleNum << endl;
    
    return 0;
}