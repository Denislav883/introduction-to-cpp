#include <iostream>
using namespace std;

int main() {
    double firstNum, secondNum;
    int op;
    
    cout << "Enter two nums: ";
    cin >> firstNum >> secondNum;
    
    cout << "Enter an operator from [1, 4]: ";
    cin >> op;
    
    

    switch (op) {
    case 1:
        cout << "The result of the addition of the two numbers is: " << firstNum + secondNum;
        break;
    case 2:
        cout << "The result of the subtraction of the two numbers is: " << firstNum - secondNum;
        break;
    case 3:
        cout << "The result of the multiplication of the two numbers is: " << firstNum * secondNum;
        break;
    case 4:
        cout << "The result of the division of the two numbers is: " << firstNum / secondNum;
        break;
    default:
        cout << "Your operator is invalid! It must be in the interval [1, 4]";
        break;
    }

    return 0;
}