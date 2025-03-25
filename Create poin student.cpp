#include <iostream>
#include <cmath> // Untuk fungsi sqrt()
using namespace std;

// Point class (Encapsulation & Abstraction)
class Point {
private:
    double x, y; // Private members (Encapsulation)

public:
    // Constructor to initialize point
    Point(double xValue, double yValue) {
        x = xValue;
        y = yValue;
    }

    // Method to set coordinates
    void setCoordinates(double xValue, double yValue) {
        x = xValue;
        y = yValue;
    }

    // Getter methods to retrieve x and y
    double getX() {
        return x;
    }

    double getY() {
        return y;
    }

    // Method to calculate distance from origin (0,0) (Abstraction)
    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }
};

int main() {
    double x, y;

    // Input from user
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout << "Enter y-coordinate: ";
    cin >> y;

    // Create Point object
    Point point(x, y);

    // Display point details
    cout << "\nPoint Coordinates: (" << point.getX() << ", " << point.getY() << ")" << endl;
    cout << "Distance from Origin: " << point.distanceFromOrigin() << endl;

    return 0;
}
