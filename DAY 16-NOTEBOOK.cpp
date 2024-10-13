#include <iostream>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;

    while (T--) {
        int N; // weight of the pulp in kg
        cin >> N;

        // Calculate the number of notebooks
        // 1 kg of pulp makes 1000 pages
        // 1 notebook consists of 100 pages
        int pages = N * 1000; // total pages from N kg of pulp
        int notebooks = pages / 100; // number of notebooks

        cout << notebooks << endl; // output the result
    }

    return 0;
}
