#include <iostream>
#include <string>

using namespace std;

// Maximum number of grades per student
const int MAX_GRADES = 10;

// Student class representing a student with attributes name and an array to store grades
class Student {
private:
    string name;
    int* grades;
    int numGrades;

public:
    // Parameterized constructor to initialize attributes
    Student(const string& studentName)
        : name(studentName), grades(new int[MAX_GRADES]), numGrades(0) {}

    // Destructor to release allocated memory
    ~Student() {
        delete[] grades;
    }

    // Function to add grades to the student's array
    void addGrade(int grade) {
        if (numGrades < MAX_GRADES) {
            grades[numGrades++] = grade;
            cout << "Grade " << grade << " added for " << name << "." << endl;
        } else {
            cout << "Maximum number of grades reached for " << name << "." << endl;
        }
    }

    // Function to calculate the average grade
    float calculateAverageGrade() const {
        if (numGrades == 0) {
            cout << "No grades available for " << name << "." << endl;
            return 0.0;
        }

        int totalGrade = 0;
        for (int i = 0; i < numGrades; ++i) {
            totalGrade += grades[i];
        }

        return static_cast<float>(totalGrade) / numGrades;
    }

    // Function to display student details and grades
    void displayDetails() const {
        cout << "Student Name: " << name << endl;
        cout << "Grades: ";
        for (int i = 0; i < numGrades; ++i) {
            cout << grades[i] << " ";
        }
        cout << endl;
        cout << "Average Grade: " << calculateAverageGrade() << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    // Get student names from the user
    string studentName1, studentName2;

    cout << "Enter the name of the first student: ";
    getline(cin, studentName1);

    cout << "Enter the name of the second student: ";
    getline(cin, studentName2);

    // Create students
    Student student1(studentName1);
    Student student2(studentName2);

    // Get grades for the first student
    int grade;
    char addMoreGrades;

    do {
        cout << "Enter a grade for " << studentName1 << ": ";
        cin >> grade;

        student1.addGrade(grade);

        cout << "Do you want to add another grade? (y/n): ";
        cin >> addMoreGrades;
    } while (addMoreGrades == 'y' || addMoreGrades == 'Y');

    // Get grades for the second student
    do {
        cout << "Enter a grade for " << studentName2 << ": ";
        cin >> grade;

        student2.addGrade(grade);

        cout << "Do you want to add another grade? (y/n): ";
        c
