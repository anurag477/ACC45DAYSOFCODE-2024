#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y; 

       
        int normal_attacks = (H + X - 1) / X; 
      
        int remaining_health_after_special = H - Y;
        int special_attacks = (remaining_health_after_special > 0) ? 
                              (remaining_health_after_special + X - 1) / X : 0; 
 
        int total_attacks_with_special = 1 + special_attacks; 
       
        int result = min(normal_attacks, total_attacks_with_special);
        
      
        cout << result << endl;
    }
    return 0;
}
