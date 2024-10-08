#include <iostream>
#include <cstdlib> // for abs function

int main() {
    int T;
    std::cin >> T; // Read number of test cases

    while (T--) {
        int X, Y;
        std::cin >> X >> Y; // Read initial positions of policeman and thief
        
        // Calculate the time to catch the thief
        int time = std::abs(Y - X); // Since relative speed is 1, time = distance

        // Output the result
        std::cout << time << std::endl;
    }

    return 0;
}
