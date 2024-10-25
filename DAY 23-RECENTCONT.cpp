#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int count_START38 = 0;
        int count_LTIME108 = 0;

        for (int i = 0; i < N; i++) {
            string contest_code;
            cin >> contest_code;

            if (contest_code == "START38") {
                count_START38++;
            } else if (contest_code == "LTIME108") {
                count_LTIME108++;
            }
        }

     
        cout << count_START38 << " " << count_LTIME108 << endl;
    }

    return 0;
}
