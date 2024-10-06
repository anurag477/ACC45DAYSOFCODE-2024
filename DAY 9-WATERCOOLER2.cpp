#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        long long X, Y;
        cin >> X >> Y; // Read rental cost and purchase cost
        
        if (Y <= X) {
            cout << 0 << endl; // If buying is cheaper or equal to renting for 1 month
        } else {
            long long months = (Y - 1) / X; // Calculate maximum months
            cout << months << endl; // Output the result
        }
    }

    return 0;
}
