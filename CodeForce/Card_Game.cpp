#include <iostream>
#include <algorithm>

using namespace std;

// Function to count number of ways Suneet wins the game
int countWaysToWin(int a1, int a2, int b1, int b2) {
    int count = 0;
    int suneet_cards[2] = {a1, a2};
    int slavic_cards[2] = {b1, b2};
    
    // Check all possible card combinations
    for (int s1 = 0; s1 < 2; ++s1) {
        for (int s2 = 0; s2 < 2; ++s2) {
            if (s2 == s1) continue;
            for (int l1 = 0; l1 < 2; ++l1) {
                for (int l2 = 0; l2 < 2; ++l2) {
                    if (l2 == l1) continue;
                    int suneet_wins = 0, slavic_wins = 0;
                    // Simulate the rounds
                    if (suneet_cards[s1] > slavic_cards[l1]) ++suneet_wins;
                    else if (suneet_cards[s1] < slavic_cards[l1]) ++slavic_wins;
                    
                    if (suneet_cards[s2] > slavic_cards[l2]) ++suneet_wins;
                    else if (suneet_cards[s2] < slavic_cards[l2]) ++slavic_wins;
                    
                    // Check if Suneet wins the game
                    if (suneet_wins > slavic_wins) ++count;
                }
            }
        }
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        int result = countWaysToWin(a1, a2, b1, b2);
        cout << result << endl;
    }
    
    return 0;
}