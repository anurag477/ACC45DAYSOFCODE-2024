#include <iostream>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;
    
    while (T--) {
        int P, Q, R, S;
        cin >> P >> Q >> R >> S;
        
        // Calculate the total profits of all companies
        int total = P + Q + R + S;
        
        // Check if any company's profit is strictly greater than the sum of profits of others
        if (P > (total - P) || Q > (total - Q) || R > (total - R) || S > (total - S)) {
            cout << "YES" << endl; // Monopoly exists
        } else {
            cout << "NO" << endl; // No monopoly
        }
    }
    
    return 0;
}

