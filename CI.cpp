#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float P, R, T, A, CI;

    cout << "Enter Principal Amount: ";
    cin >> P;

    cout << "Enter Rate of Interest: ";
    cin >> R;

    cout << "Enter Time (in years): ";
    cin >> T;

    A = P * pow((1 + R/100), T);
    CI = A - P;

    cout << "Compound Interest = " << CI;

    return 0;
}
