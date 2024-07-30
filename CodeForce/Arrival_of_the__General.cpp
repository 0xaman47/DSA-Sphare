#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Declare an array to store heights
    int arr[n];

    // Read heights into the array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Initialize variables to find max and min indices
    int max_height = arr[0];
    int min_height = arr[0];
    int max_index = 0;
    int min_index = 0;

    // Traverse the array to find max and min height indices
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_height) {
            max_height = arr[i];
            max_index = i;
        }
        if (arr[i] <= min_height) {
            min_height = arr[i];
            min_index = i;
        }
    }

    // Calculate the number of moves required
    int moves_to_front = max_index;
    int moves_to_end = n - 1 - min_index;

    // Adjust if the max_index is greater than min_index
    if (max_index > min_index) {
        --moves_to_end;
    }

    int total_moves = moves_to_front + moves_to_end;
    
    cout << total_moves << endl;
    return 0;
}
