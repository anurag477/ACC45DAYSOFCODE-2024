#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases
    
    while (T--) {
        int N, K, M;
        cin >> N >> K >> M; // Read N, K, M
        
        // Calculate the capacity of one bag
        int capacity = K * M;
        
        // Calculate the minimum number of bags needed
        int bags_needed = (N + capacity - 1) / capacity; // This is equivalent to ceil(N / capacity)
        
        cout << bags_needed << endl; // Output the result
    }
    
    return 0;
}
