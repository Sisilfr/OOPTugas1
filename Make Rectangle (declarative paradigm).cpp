#include <iostream>
#include <functional>  // Untuk std::function
using namespace std;

int main() {
    double length, width;
    
    cout << "Enter Length of Rectangle: ";
    cin >> length;
    cout << "Enter Width of Rectangle: ";
    cin >> width;

    // Menggunakan std::function untuk mendeklarasikan perhitungan luas
    function<double(double, double)> calculateArea = [](double l, double w) {
        return l * w;
    };

    cout << "Area of Rectangle: " << calculateArea(length, width) << endl;
    return 0;
}
