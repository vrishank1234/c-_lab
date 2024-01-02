#include <iostream>

using namespace std;

int main() {
    // Input marks for 5 subjects
    cout << "Enter marks for 5 subjects:\n";
    double subject1, subject2, subject3, subject4, subject5;
    cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5;

    // Calculate average
    double average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;

    // Determine grade using if-else-if ladder
    char grade;
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Display the grade
    cout << "Average Marks: " << average << "\n";
    cout << "Grade: " << grade << "\n";

    return 0;
}
