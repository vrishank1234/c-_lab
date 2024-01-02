#include <iostream>

using namespace std;

bool isArraySorted(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;  // If any element is smaller than the previous one, array is not sorted
        }
    }
    return true;  // If loop completes without returning false, array is sorted
}

int main() {
    const int size = 5;  // Adjust the size as needed
    int arr[size];

    // Input array elements
    cout << "Enter " << size << " integers for the array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Check if the array is sorted in ascending order
    if (isArraySorted(arr, size)) {
        cout << "The array is sorted in ascending order.\n";
    } else {
        cout << "The array is not sorted in ascending order.\n";
    }

    return 0;
}
