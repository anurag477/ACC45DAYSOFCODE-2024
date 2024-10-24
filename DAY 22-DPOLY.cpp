#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N;

        vector<int> coefficients(N);
        for (int i = 0; i < N; i++) {
            cin >> coefficients[i]; 
        }

       
        int degree = -1;
        for (int i = 0; i < N; i++) {
            if (coefficients[i] != 0) {
                degree = i; 
            }
        }

        cout << degree << endl; 
    }

    return 0;
}
