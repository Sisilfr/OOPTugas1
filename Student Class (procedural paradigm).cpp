#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    char grade;
};

// Function to create student
Student createStudent(string name, int id, char grade) {
    Student s;
    s.name = name;
    s.id = id;
    s.grade = grade;
    return s;
}

// Function to display student details
void displayStudent(Student s) {
    cout << "Student Name: " << s.name << endl;
    cout << "Student ID: " << s.id << endl;
    cout << "Grade: " << s.grade << endl;
}

int main() {
    string name;
    int id;
    char grade;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student Grade (A/B/C/D/F): ";
    cin >> grade;

    Student student = createStudent(name, id, grade);
    
    cout << "\nStudent Information:" << endl;
    displayStudent(student);

    return 0;
}
