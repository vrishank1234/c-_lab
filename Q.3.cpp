#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    // Input a string
    cout << "Enter a string: ";
    getline(cin, input);

    // Remove spaces and convert to lowercase for case-insensitive comparison
    string processedInput;
    for (char character : input) {
        if (!isspace(character)) {
            processedInput += tolower(character);
        }
    }

    // Check if the string is a palindrome
    bool isPalindrome = true;
    int length = processedInput.length();

    for (int i = 0; i < length / 2; ++i) {
        if (processedInput[i] != processedInput[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    return 0;
}
