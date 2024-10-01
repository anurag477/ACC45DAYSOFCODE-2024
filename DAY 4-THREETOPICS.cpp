#include <iostream>
using namespace std;

int main() {
    int A, B, C, X;
    // Read the input values
    cin >> A >> B >> C >> X;

    // Check if the topic X matches any of the topics A, B, or C
    if (X == A || X == B || X == C) {
        cout << "Yes" << endl;  // Chef has a chance to win
    } else {
        cout << "No" << endl;   // Chef does not have a chance to win
    }

    return 0;
}
