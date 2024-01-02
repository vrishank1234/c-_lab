#include <iostream>

using namespace std;

int main() {
    int num;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    // Find the sum of digits until it becomes a single-digit number
    while (num >= 10) {
        int sum = 0;

        // Calculate the sum of digits
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        // Update the number with the new sum
        num = sum;
    }

    // Display the result
    cout << "Sum of digits until it becomes a single-digit number: " << num << endl;

    return 0;
}
