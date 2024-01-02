#include <iostream>

using namespace std;

int main() {
    int rows;

    // Input the number of rows for Pascal's Triangle
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    // Generate and print Pascal's Triangle
    for (int i = 0; i < rows; ++i) {
        int coefficient = 1;

        // Print leading spaces for each row
        for (int space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }

        // Print coefficients for each row
        for (int j = 0; j <= i; ++j) {
            cout << "  " << coefficient;
            coefficient = coefficient * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
