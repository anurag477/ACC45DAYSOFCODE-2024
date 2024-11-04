#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Number of bits
        cin >> N;

        // Check if N is divisible by 4
        if (N % 4 == 0) {
            cout << "Good" << endl; // It's Good if N is divisible by 4
        } else {
            cout << "Not Good" << endl; // It's Not Good otherwise
        }
    }

    return 0;
}
