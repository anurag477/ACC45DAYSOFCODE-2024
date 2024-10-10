#include <iostream>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;

    while (T--) {
        int X, Y; // X = total problems submitted, Y = approved problems
        cin >> X >> Y;

        // Check if the number of approved problems is at least 50% of total problems
        if (Y * 2 >= X) {
            cout << "YES" << endl; // Munchy is an expert
        } else {
            cout << "NO" << endl; // Munchy is not an expert
        }
    }

    return 0;
}
