#include <iostream>
#include <string>
using namespace std;

int main() {
    string romanNum;
    cin >> romanNum;

    int result = 0;

    int v1 = 0, v2 = 0;

    if (romanNum.length() > 0) {
        if (romanNum[0] == 'I') v1 = 1;
        if (romanNum[0] == 'V') v1 = 5;
        if (romanNum[0] == 'X') v1 = 10;
        if (romanNum[0] == 'L') v1 = 50;
        if (romanNum[0] == 'C') v1 = 100;
        if (romanNum[0] == 'D') v1 = 500;
        if (romanNum[0] == 'M') v1 = 1000;
    }

    if (romanNum.length() > 1) {
        if (romanNum[1] == 'I') v2 = 1;
        if (romanNum[1] == 'V') v2 = 5;
        if (romanNum[1] == 'X') v2 = 10;
        if (romanNum[1] == 'L') v2 = 50;
        if (romanNum[1] == 'C') v2 = 100;
        if (romanNum[1] == 'D') v2 = 500;
        if (romanNum[1] == 'M') v2 = 1000;

        if (v1 < v2) {
            result -= v1;
        } else {
            result += v1;
        }
        
    } else {
        result += v1;
    }

    v1 = v2;

    if (romanNum.length() > 2) {
        if (romanNum[2] == 'I') v2 = 1;
        if (romanNum[2] == 'V') v2 = 5;
        if (romanNum[2] == 'X') v2 = 10;
        if (romanNum[2] == 'L') v2 = 50;
        if (romanNum[2] == 'C') v2 = 100;
        if (romanNum[2] == 'D') v2 = 500;
        if (romanNum[2] == 'M') v2 = 1000;

        if (v1 < v2) {
            result -= v1;
        } else {
            result += v1;
        }

    } else {
        result += v1;
    }

    v1 = v2;

    if (romanNum.length() > 3) {
        if (romanNum[3] == 'I') v2 = 1;
        if (romanNum[3] == 'V') v2 = 5;
        if (romanNum[3] == 'X') v2 = 10;
        if (romanNum[3] == 'L') v2 = 50;
        if (romanNum[3] == 'C') v2 = 100;
        if (romanNum[3] == 'D') v2 = 500;
        if (romanNum[3] == 'M') v2 = 1000;

        if (v1 < v2) {
            result -= v1;
        } else {
            result += v1;
        }
        
    } else {
        result += v1;
    }

    v1 = v2;

    if (romanNum.length() > 4) {
        if (romanNum[4] == 'I') v2 = 1;
        if (romanNum[4] == 'V') v2 = 5;
        if (romanNum[4] == 'X') v2 = 10;
        if (romanNum[4] == 'L') v2 = 50;
        if (romanNum[4] == 'C') v2 = 100;
        if (romanNum[4] == 'D') v2 = 500;
        if (romanNum[4] == 'M') v2 = 1000;

        if (v1 < v2) {
            result -= v1;
        } else {
            result += v1;
        }
        
    } else {
        result += v1;
    }

    cout << result;

    return 0;
}