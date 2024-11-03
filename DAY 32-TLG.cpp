#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of rounds
    
    int cumulative_score_player1 = 0;
    int cumulative_score_player2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; ++i) {
        int score1, score2;
        cin >> score1 >> score2; // Read scores for Player 1 and Player 2
        
        // Update cumulative scores
        cumulative_score_player1 += score1;
        cumulative_score_player2 += score2;

        // Determine the lead and the leader
        if (cumulative_score_player1 > cumulative_score_player2) {
            int lead = cumulative_score_player1 - cumulative_score_player2;
            if (lead > max_lead) {
                max_lead = lead;
                winner = 1; // Player 1 is the leader
            }
        } else {
            int lead = cumulative_score_player2 - cumulative_score_player1;
            if (lead > max_lead) {
                max_lead = lead;
                winner = 2; // Player 2 is the leader
            }
        }
    }

    // Output the winner and the maximum lead
    cout << winner << " " << max_lead << endl;

    return 0;
}
