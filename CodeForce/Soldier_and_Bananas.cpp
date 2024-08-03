#include <iostream>
using namespace std;

int main() {
    // Read input values
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate the total cost of buying w bananas
    // Sum of the first w natural numbers is w * (w + 1) / 2
    // Total cost = k * (1 + 2 + 3 + ... + w)
    long long total_cost = k * (w * (w + 1)) / 2;

    // Calculate the amount of money the soldier needs to borrow
    long long amount_to_borrow = total_cost - n;

    // If amount_to_borrow is positive, print it; otherwise, print 0
    if (amount_to_borrow > 0) {
        cout << amount_to_borrow << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
