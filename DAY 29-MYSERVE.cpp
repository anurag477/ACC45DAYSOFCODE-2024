#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int P, Q;
        cin >> P >> Q; 

        int totalPoints = P + Q;
        int serveNumber = totalPoints / 2; 

       
        if (serveNumber % 2 == 0) {
            cout << "Alice" << endl; 
        } else {
            cout << "Bob" << endl; 
        }
    }

    return 0;
}
