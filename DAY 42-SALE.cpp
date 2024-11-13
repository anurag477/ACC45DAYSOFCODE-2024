#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C; 
        
       
        int total_cost = A + B + C;
        int min_price = min({A, B, C});  
        
      
        cout << total_cost - min_price << endl;
    }
    
    return 0;
}
