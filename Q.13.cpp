#include <iostream>

using namespace std;

// Function to swap characters in a string
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Function to generate all permutations of a string
void generatePermutations(string str, int start, int end) {
    if (start == end) {
        cout << str << endl;  // Print the permutation when all characters are fixed
    } else {
        for (int i = start; i <= end; ++i) {
            swap(str[start], str[i]);  // Fix one character at a time

            // Recursively generate permutations for the remaining characters
            generatePermutations(str, start + 1, end);

            swap(str[start], str[i]);  // Backtrack to restore the original string
        }
    }
}

int main() {
    string input;

    // Input a string
    cout << "Enter a string: ";
    cin >> input;

    // Generate and display all permutations of the input string
    cout << "\nAll permutations of the string:\n";
    generatePermutations(input, 0, input.length() - 1);

    return 0;
}
