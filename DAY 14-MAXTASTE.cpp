#include <iostream>
#include <algorithm> // for std::max
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases
    
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d; // Read tastiness values
        
        // Calculate possible tastiness combinations
        int tastiness1 = a + c; // A + C
        int tastiness2 = a + d; // A + D
        int tastiness3 = b + c; // B + C
        int tastiness4 = b + d; // B + D
        
        // Find the maximum tastiness
        int maxTastiness = max({tastiness1, tastiness2, tastiness3, tastiness4});
        
        // Output the maximum tastiness
        cout << maxTastiness << endl;
    }
    
    return 0;
}

