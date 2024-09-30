#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y; // Working hours from Monday to Thursday and Friday
        cin >> X >> Y;

        // Calculate total working hours in one week
        int totalHours = (4 * X) + Y;

        // Output the result for the current test case
        cout << totalHours << endl;
    }

    return 0;
}
