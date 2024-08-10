/*
Question : 
*/

/*
Solution
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;

unsigned int lcgRandom(unsigned int& state) {
    state = (state * 1103515245 + 12345) % (1 << 31);
    return state;
}

// Function to generate `z` random integers that sum up to `targetSum`
vector<int> generateValues(int z, int targetSum, unsigned int& state) {
    vector<int> values(z);
    int sum = 0;

    // Randomly generate values and adjust to achieve targetSum
    for (int i = 0; i < z - 1; ++i) {
        values[i] = lcgRandom(state) % 20 - 10; // Random values between -10 and 9
        sum += values[i];
    }
    values[z - 1] = targetSum - sum; // Adjust last value to reach targetSum

    return values;
}

void fun() {
    int x, y, z;
    cin >> x >> y >> z;

    if (z <= 0) {
        return;
    }

    // Initialize PRNG state with a fixed seed for reproducibility
    unsigned int state = 12345; // Fixed seed value

    // Calculate target sums
    int targetSumX = x * z;
    int targetSumY = y * z;

    // Generate random values
    vector<int> valuesX = generateValues(z, targetSumX, state);
    
    // Reset PRNG state for a new sequence
    state = 12345; // Reset to fixed seed value
    vector<int> valuesY = generateValues(z, targetSumY, state);

    // Print the results
    for (int i = 0; i < z; ++i) {
        cout << valuesX[i] <<" "<<valuesY[i];
        cout <<endl;
    }
}

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        fun();
    }
    return 0;
}
