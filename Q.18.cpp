#include <iostream>

using namespace std;

// Calculator class with methods for basic operations
class Calculator {
public:
    // Function to perform addition
    double add(double num1, double num2) {
        return num1 + num2;
    }

    // Function to perform subtraction
    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    // Function to perform multiplication
    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    // Function to perform division
    double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator calculator;

    double num1, num2;
    char operation;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Input operation to perform
    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    // Perform the selected operation
    switch (operation) {
        case '+':
            cout << "Result: " << calculator.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calculator.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calculator.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calculator.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
            break;
    }

    return 0;
}
