#include <iostream>
using namespace std;

// Rectangle class (Encapsulation & Abstraction)
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Setter to update rectangle dimensions
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    // Method to calculate area (Abstraction)
    double calculateArea() {
        return length * width;
    }

    // Method to display rectangle details
    void displayDetails() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    double length, width;

    // Input from user
    cout << "Enter Length of Rectangle: ";
    cin >> length;
    cout << "Enter Width of Rectangle: ";
    cin >> width;

    // Create Rectangle object
    Rectangle rect(length, width);

    // Display rectangle details
    cout << "\nRectangle Details:" << endl;
    rect.displayDetails();

    return 0;
}
