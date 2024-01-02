#include <iostream>
#include <string>

using namespace std;

// Maximum number of students in the record
const int MAX_STUDENTS = 10;

// Student class representing a student with attributes name, roll number, and marks
class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Parameterized constructor to initialize attributes
    Student(const string& n, int roll, float m)
        : name(n), rollNumber(roll), marks(m) {}

    // Function to display student details
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "-----------------------------" << endl;
    }

    // Getter for student marks
    float getMarks() const {
        return marks;
    }
};

// StudentRecord class managing students using a fixed-size array
class StudentRecord {
private:
    Student students[MAX_STUDENTS];
    int numStudents;

public:
    // Default constructor
    StudentRecord() : numStudents(0) {}

    // Function to add a new student to the record
    void addStudent(const Student& student) {
        if (numStudents < MAX_STUDENTS) {
            students[numStudents++] = student;
        } else {
            cout << "Student record is full. Cannot add more students." << endl;
        }
    }

    // Function to display details of all students in the record
    void displayAllStudents() const {
        cout << "Student Record:" << endl;
        for (int i = 0; i < numStudents; ++i) {
            students[i].displayDetails();
        }
    }

    // Function to calculate and display the average marks of all students
    void calculateAverageMarks() const {
        if (numStudents == 0) {
            cout << "No students in the record." << endl;
            return;
        }

        float totalMarks = 0.0;
        for (int i = 0; i < numStudents; ++i) {
            totalMarks += students[i].getMarks();
        }

        float averageMarks = totalMarks / numStudents;
        cout << "Average Marks of All Students: " << averageMarks << endl;
    }
};

int main() {
    // Create student record
    StudentRecord studentRecord;

    char addMoreStudents;
    do {
        // Get student details from the user
        string studentName;
        int studentRollNumber;
        float studentMarks;

        cout << "Enter student name: ";
        cin >> studentName;

        cout << "Enter student roll number: ";
        cin >> studentRollNumber;

        cout << "Enter student marks: ";
        cin >> studentMarks;

        // Create student based on user input
        Student newStudent(studentName, studentRollNumber, studentMarks);

        // Add the student to the record
        studentRecord.addStudent(newStudent);

        cout << "Do you want to add more students to the record? (y/n): ";
        cin >> addMoreStudents;
    } while (addMoreStudents == 'y' || addMoreStudents == 'Y');

    // Display details of all students
    studentRecord.displayAllStudents();

    // Calculate and display the average marks of all students
    studentRecord.calculateAverageMarks();

    return 0;
}
