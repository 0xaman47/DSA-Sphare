#include <bits/stdc++.h>
using namespace std;

void fun() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isConditionMet = false;
    
    // Loop through the array to find the required condition
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {  // Check if arr[i] is less than arr[i+1]
            bool isGreaterThanOnlyOne = true;
            
            // Check if arr[i + 1] is greater than all elements before it
            for (int j = 0; j < i; j++) {
                if (arr[i + 1] <= arr[j]) {
                    isGreaterThanOnlyOne = false;
                    break;
                }
            }
            
            // If the condition is met, set the flag to true and break out of the loop
            if (isGreaterThanOnlyOne) {
                isConditionMet = true;
                break;
            }
        }
    }

    // Output result
    if (isConditionMet) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        fun();
    }
    return 0;
}
