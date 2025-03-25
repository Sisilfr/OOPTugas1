#include <iostream>
using namespace std;

// Student class (Encapsulation & Abstraction)
class Student {
private:
    string name;
    int id;
    char grade;

public:
    // Constructor
    Student(string studentName, int studentID, char studentGrade) {
        name = studentName;
        id = studentID;
        grade = studentGrade;
    }

    // Setter to update student details
    void setDetails(string studentName, int studentID, char studentGrade) {
        name = studentName;
        id = studentID;
        grade = studentGrade;
    }

    // Getter to display student details
    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << id << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    string name;
    int id;
    char grade;

    // Input from user
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student Grade (A/B/C/D/F): ";
    cin >> grade;

    // Create Student object
    Student student(name, id, grade);

    // Display student details
    cout << "\nStudent Information:" << endl;
    student.displayDetails();

    return 0;
}
