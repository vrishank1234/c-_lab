#include <iostream>

using namespace std;

int main() {
    double balance = 1000.0;  // Initial balance

    while (true) {
        int choice;

        // Display menu
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Check Balance
                cout << "Your Balance: $" << balance << endl;
                break;
            case 2:
                // Deposit
                double depositAmount;
                cout << "Enter the deposit amount: $";
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Deposit Successful. New Balance: $" << balance << endl;
                break;
            case 3:
                // Withdraw
                double withdrawAmount;
                cout << "Enter the withdrawal amount: $";
                cin >> withdrawAmount;

                if (withdrawAmount > balance) {
                    cout << "Insufficient funds. Withdrawal unsuccessful.\n";
                } else {
                    balance -= withdrawAmount;
                    cout << "Withdrawal Successful. New Balance: $" << balance << endl;
                }
                break;
            case 4:
                // Exit
                cout << "Exiting ATM. Have a great day!\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}
