#include <iostream>

using namespace std;

int main() {
    int n;

    // Input the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Print the pattern
    for (int i = 1; i <= n; ++i) {
        // Print numbers in increasing order
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        // Print numbers in decreasing order (excluding the last number)
        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }

        cout << endl;  // Move to the next line after printing each row
    }

    // Print the inverted pattern
    for (int i = n - 1; i >= 1; --i) {
        // Print numbers in increasing order
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        // Print numbers in decreasing order (excluding the last number)
        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }

        cout << endl;  // Move to the next line after printing each row
    }

    return 0;
}
