#include <iostream>

using namespace std;

int main() {
    int N;

    // Input the value of N
    cout << "Enter the value of N: ";
    cin >> N;

    double sum = 0.0;
    double factorial = 1.0;

    // Calculate the sum of the series
    for (int i = 1; i <= N; ++i) {
        factorial *= i;

        sum += static_cast<double>(i) / factorial;
    }

    // Display the result
    cout << "Sum of the series: " << sum << endl;

    return 0;
}
