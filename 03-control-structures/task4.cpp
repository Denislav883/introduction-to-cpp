#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int min = 3, max = 8;

    srand(time(0));

    int randomNum = min + rand() % (max - min + 1); // random number in the interval [3, 8]

    cout << "The randomly generated num in the interval: ["<< min <<", "<< max <<"] is " << randomNum;

    return 0;
}