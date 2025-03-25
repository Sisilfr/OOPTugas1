#include <iostream>
#include <functional>
using namespace std;

function<int(int)> increment = [](int count) {
    return count + 1;
};

int main() {
    int count = 0; // Immutability (nilai hanya diperbarui melalui fungsi)

    // Menggunakan fungsi increment untuk memperbarui count
    count = increment(count);
    count = increment(count);
    count = increment(count);

    cout << "Current Count: " << count << endl;
    return 0;
}
