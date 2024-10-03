#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        // Calculate points when solving A first, then B
        int pointsAfirst = (500 - 2 * X) + (1000 - 4 * (X + Y));
        
        // Calculate points when solving B first, then A
        int pointsBfirst = (1000 - 4 * Y) + (500 - 2 * (X + Y));
        
        // Get the maximum points from both scenarios
        int maxPoints = max(pointsAfirst, pointsBfirst);
        
        // Output the result for this test case
        cout << maxPoints << endl;
    }

    return 0;
}