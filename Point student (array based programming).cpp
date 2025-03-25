#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate distance from origin (0,0)
double distanceFromOrigin(double point[2]) {
    return sqrt(point[0] * point[0] + point[1] * point[1]);
}

int main() {
    double point[2]; // Array untuk menyimpan koordinat (x, y)

    // Input dari pengguna
    cout << "Enter x-coordinate: ";
    cin >> point[0];
    cout << "Enter y-coordinate: ";
    cin >> point[1];

    // Menampilkan hasil
    cout << "\nPoint Coordinates: (" << point[0] << ", " << point[1] << ")" << endl;
    cout << "Distance from Origin: " << distanceFromOrigin(point) << endl;

    return 0;
}
