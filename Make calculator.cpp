#include <iostream>
using namespace std;

// Abstract class (abstraction)
class Calculator {
private:
    double num1, num2; // Encapsulation (private members)

public:
    // Constructor
    Calculator(double a, double b) {
        num1 = a;
        num2 = b;
    }

    // Public methods (Abstraction: only exposing necessary operations)
    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0; // Handle division by zero
        }
        return num1 / num2;
    }
};

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Create Calculator object
    Calculator calc(a, b);

    // Perform operations
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}
