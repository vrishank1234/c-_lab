#include <iostream>

using namespace std;

const int MAX_ROWS = 3;  // Adjust the number of rows as needed
const int MAX_COLS = 3;  // Adjust the number of columns as needed

void calculateRowSum(int matrix[][MAX_COLS], int rowSums[], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        rowSums[i] = 0;  // Initialize the sum for each row

        for (int j = 0; j < cols; ++j) {
            rowSums[i] += matrix[i][j];  // Add each element to the sum
        }
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];

    // Input matrix elements
    cout << "Enter matrix elements (" << MAX_ROWS << "x" << MAX_COLS << "):\n";
    for (int i = 0; i < MAX_ROWS; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of elements in each row
    int rowSums[MAX_ROWS];
    calculateRowSum(matrix, rowSums, MAX_ROWS, MAX_COLS);

    // Display the sum of elements in each row
    cout << "\nSum of elements in each row:\n";
    for (int i = 0; i < MAX_ROWS; ++i) {
        cout << "Row " << i + 1 << ": " << rowSums[i] << endl;
    }

    return 0;
}
