#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y; // Time taken by bike and car
        cin >> X >> Y;

        if (X < Y) {
            cout << "BIKE" << endl; // Bike is faster
        } else if (X > Y) {
            cout << "CAR" << endl; // Car is faster
        } else {
            cout << "SAME" << endl; // Both take the same time
        }
    }

    return 0;
}
