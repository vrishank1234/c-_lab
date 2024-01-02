#include <iostream>
#include <string>

using namespace std;

void swapStrings(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    const int size = 5; // Adjust the size as needed
    string strings[size];

    // Input strings
    cout << "Enter " << size << " strings:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        cin >> strings[i];
    }

    // Sort the array of strings in alphabetical order (using bubble sort)
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (strings[j] > strings[j + 1]) {
                swapStrings(strings[j], strings[j + 1]);
            }
        }
    }

    // Display the strings in alphabetical order
    cout << "\nStrings in alphabetical order:\n";
    for (int i = 0; i < size; ++i) {
        cout << strings[i] << endl;
    }

    return 0;
}
