#include <iostream>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T; // reading the number of test cases

    while (T--) {
        int X; // starting time
        cin >> X; // reading the starting time
        
        // Check if he can finish all assignments by 10 PM
        if (X <= 7) {
            cout << "Yes" << endl; // He can finish on time
        } else {
            cout << "No" << endl; // He cannot finish on time
        }
    }

    return 0;
}
