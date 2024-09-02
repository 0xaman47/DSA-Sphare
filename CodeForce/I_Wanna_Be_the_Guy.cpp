/*
Question : 
There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend Little Y are addicted to the game. Each of them
wants to pass the whole game.
Little X can pass only p levels of the game. And Little Y can pass only q levels of the game. You are given the indices of levels Little X
can pass and the indices of levels Little Y can pass. Will Little X and Little Y pass the whole game, if they cooperate each other?

Input : The first line contains a single integer n (1 ≤  n ≤ 100).
        The next line contains an integer p (0 ≤ p ≤ n) at first, then follows p distinct integers a1, a2, ..., ap (1 ≤ ai ≤ n). These 
        integers denote the indices of levels Little X can pass. The next line contains the levels Little Y can pass in the same format. 
        It's assumed that levels are numbered from 1 to n.
Output : If they can pass all the levels, print "I become the guy.". If it's impossible, print "Oh, my keyboard!" (without the quotes).

Examples
Input
4
3 1 2 3
2 2 4
Output
I become the guy.

Input
4
3 1 2 3
2 2 3

Output
Oh, my keyboard!

Note
In the first sample, Little X can pass levels [1 2 3], and Little Y can pass level [2 4], so they can pass all the levels both.
In the second sample, no one can pass level 4.

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