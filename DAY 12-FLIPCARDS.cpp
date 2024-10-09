#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases
    
    while (T--) {
        int N, X;
        cin >> N >> X; // Read N and X
        
        // Calculate the number of face-down cards
        int face_down = N - X;
        
        // The minimum flips required to make all cards the same
        int min_flips = min(X, face_down);
        
        cout << min_flips << endl; // Output the result
    }
    
    return 0;
}
