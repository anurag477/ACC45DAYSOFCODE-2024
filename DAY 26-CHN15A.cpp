#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K; 
        
        vector<int> characteristic_values(N);
        for (int i = 0; i < N; ++i) {
            cin >> characteristic_values[i];
        }

        int countWolverine = 0; 
        for (int i = 0; i < N; ++i) {
           
            if ((characteristic_values[i] + K) % 7 == 0) {
                countWolverine++;
            }
        }

        cout << countWolverine << endl; 
    }
    
    return 0;
}
