#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;

int fun() {
    int n, p, q;
    cin >> n;
    vector<int> arr(n + 1, 0); // Using vector for dynamic size

    int level;
    cin >> p;
    for(int i = 0; i < p; i++) {
        cin >> level;
        arr[level] = 1;
    }
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> level;
        arr[level] = 1;
    }

    for(int i = 1; i <= n; i++) {
        if(arr[i] == 0) {
            return 0; // Return 0 if not all levels are covered
        }
    }

    return 1; // Return 1 if all levels are covered
}

int main() {
    int t = 1; 
    // cin >> t;
    while(t--) {
        int result = fun();
        if(result == 1) {
            cout << "I become the guy.";
        } else {
            cout << "Oh, my keyboard!";
        }
    }

    return 0;
}
