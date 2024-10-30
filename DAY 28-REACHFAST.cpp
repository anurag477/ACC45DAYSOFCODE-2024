#include <iostream>
#include <cmath> // for abs function

using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int A, B, K;
        cin >> A >> B >> K; 

      
        int distance = abs(A - B);
        
      
        int steps = distance / K; 
        if (distance % K != 0) { 
            steps++;
        }

        cout << steps << endl;
    }

    return 0;
}
