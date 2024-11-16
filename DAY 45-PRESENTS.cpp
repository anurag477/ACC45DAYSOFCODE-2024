#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int N;
        cin >> N;  
        
      
        int coins = (N / 5) * 4 + (N % 5);
        
     cout << coins << endl;
    }

    return 0;
}
