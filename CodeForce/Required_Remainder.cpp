#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i < b; i++)

void fun(){
    ll x, y, n;
    cin >> x >> y >> n;

    // Calculate the maximum value i = k * x + y where i <= n
    if (y > n) {
        cout << 0 << endl; // If y > n, no valid i can be found
        return;
    }

    // Maximum k is (n - y) / x
    ll k = (n - y) / x;
    ll ans = k * x + y;

    cout << ans << endl;
}

int main() {
    ll t = 1; 
    cin >> t;
    while (t--) {
        fun();
    }
    return 0;
}
