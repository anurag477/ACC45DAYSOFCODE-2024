#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y; 
        
       
        int maxScore = N * X;
        
       
        if (Y <= maxScore && Y % X == 0) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
