#include <iostream>

using namespace std;

int main() {
    double base, exponent, result = 1;

    // Input base and exponent
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate power using a loop
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
