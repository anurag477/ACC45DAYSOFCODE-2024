#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases
    
    while (T--) {
        int N;
        cin >> N;  // Length of the array
        vector<int> A(N);
        
        // Read the array elements
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        // Frequency map to store occurrences of each element
        unordered_map<int, int> freq;
        
        // Fill the frequency map
        for (int i = 0; i < N; i++) {
            freq[A[i]]++;
        }
        
        // Find the maximum frequency
        int maxFreq = 0;
        for (auto &entry : freq) {
            maxFreq = max(maxFreq, entry.second);
        }
        
        // The result is N - maxFreq (the number of deletions required)
        cout << N - maxFreq << endl;
    }
    
    return 0;
}
