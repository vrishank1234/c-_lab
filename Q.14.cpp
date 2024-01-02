#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Input number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    // Print the pattern
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            // Print '*' for the first and last rows, and for the first and last columns
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                // Print a space for other positions
                cout << " ";
            }
        }
        cout << endl;  // Move to the next line after printing each row
    }

    return 0;
}
