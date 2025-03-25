#include <iostream>
using namespace std;

// Counter class (Encapsulation & Abstraction)
class Counter {
private:
    int count; // Encapsulated data member

public:
    // Constructor (Initialize count to 0)
    Counter() {
        count = 0;
    }

    // Method to increment count
    void increment() {
        count++;
    }

    // Method to get current count
    int getCount() {
        return count;
    }
};

int main() {
    Counter counter; // Create Counter object

    // Increment counter multiple times
    counter.increment();
    counter.increment();
    counter.increment();

    // Display the current count
    cout << "Current Count: " << counter.getCount() << endl;

    return 0;
}
