#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;

        // Check all combinations of weights
        bool possible = false;

        // Check using 0 to 3 weights
        // 0 weights
        if (W == 0) possible = true;
        // 1 weight
        if (W == X || W == Y || W == Z) possible = true;
        // 2 weights
        if (W == X + Y || W == X + Z || W == Y + Z) possible = true;
        // 3 weights
        if (W == X + Y + Z) possible = true;

        // Output result
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
